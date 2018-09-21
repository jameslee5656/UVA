#include <iostream>
using namespace std;
bool isprime(int);
int main(void)
{
	int n,number = 0;
	while(scanf("%d", &n)!=0)
	{
		if(n == 0)		
		{
			exit(0);
		}
		else if(n != 4)
		{
			number = 0;
			for(int a = 3;a <= n/2 ; a+=2)//N > 7
			{
				if(isprime(a)&&isprime(n-a))
					number++;				
			}
			cout << number << endl;
		}
		else
			cout << 1 << endl;
	}
}
bool isprime(int a)
{
	int b = 2;
	while(a != b)
	{
		if(a % b == 0)
			return false;
		b++;
	}
	return true;
}
