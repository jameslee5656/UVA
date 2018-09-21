#include <iostream>
using namespace std;
int main(void)
{
	int number = 0;
	scanf("%d ",&number);
	int s1,s2,s3,s4;
	for(int a = 0;a < number; a++)
	{
		scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
		if((s1 == s2)&&(s2 == s3)&&(s3 == s4))
		{
			cout << "square" << endl;
		}
		else if(((s1 == s2)&&(s3 == s4))||((s1 == s4)&&(s2 == s3))
		||((s1 == s3)&&(s2 == s4)))
		{
			cout << "rectangle" << endl;
		}
		else if((s1+s2+s3>s4)&&(s1+s3+s4>s2)&&(s1+s2+s4>s3)&&(s2+s3+s4>s1))
		{
			cout << "quadrangle" << endl;
		}
		else
		{
			cout << "banana" << endl;
		}
	}
}
