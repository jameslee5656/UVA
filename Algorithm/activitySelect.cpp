#include <iostream>
using namespace std;
int * MaxActivities(int s[],int f[],int n)
{
	int *activity = new int(n);
	int actSize = 0;
	int i=0;
	activity[actSize] = i;
	for(int j=1; j<n; j++)
	{
		if(s[j]>=f[i]){
			activity[++actSize] = j;
			i = j;
		}	
	}
	return activity;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int *s = new int(n);
    int *f = new int(n);
    for(int a=0; a < n; a++){
    	scanf(" %d",&s[a]);
	}
	for(int a=0; a < n; a++){
    	scanf(" %d",&f[a]);
	}
    int *act = MaxActivities(s,f,n);
    int actsize = sizeof(act)/sizeof(act[0]) + 1;
    cout << actsize + 1 << endl;
    for(int a = 0;a < actsize;a++)
    {
    	cout << act[a] + 1 << " ";
	}
	cout << act[actsize] + 1;
    return 0; 
}
