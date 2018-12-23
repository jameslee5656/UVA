#include <iostream>
#include <stdio.h>
using namespace std;
int max(int a, int b){ return(a>=b)?a:b;}
int knapSack(int w, int wt[], int v,int vt[],int cost[], int n)
{
	if (n == 0 || w == 0 || v == 0){
		return 0;
	}
		
	if(wt[n-1] > w){
		return knapSack(w, wt, v, vt, cost, n-1);
	}
	else if (vt[n-1] > v){
		return knapSack(w, wt, v, vt, cost, n-1);
	}
	else{
		return max(cost[n-1] + knapSack(w-wt[n-1], wt,v-vt[n-1], vt, cost, n-1),
					knapSack(w, wt, v, vt,cost, n-1));
	}
}
int main()
{
	int w = 0;
	int n = 0;
	int v = 0;
	scanf("%d ", &n);
	scanf("%d ", &w);
	scanf("%d", &v);
	int *cost = new int(n);
	int *wt = new int(n);
	int *vt = new int(n);
	for(int a = 0; a < n;a++){
		scanf(" %d",&cost[a]);
		cout << cost[a] << endl;
	}
		for(int a = 0; a < n;a++){
		scanf(" %d",&wt[a]);
		cout << wt[a] << endl;
	}
		for(int a = 0; a < n;a++){
		scanf(" %d",&vt[a]);
		cout << vt[a] << endl;
	}
	cout << w << v << n << endl;
	cout << knapSack(w,wt,v,vt,cost,n) << endl;
	
	delete [] cost;
	delete [] wt;
	delete [] vt;
	
	return 0;
}
