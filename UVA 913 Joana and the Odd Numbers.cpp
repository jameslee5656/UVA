#include <iostream>
using namespace std;
int main(void)
{
	long n;
	unsigned long N;
	while(scanf("%d", &n)!=EOF)
	{
		if(n != 1)
		{
			N = ((n-1)*(n-1))/2 + 2*n - 5;
			N = 3*N + 6;
			cout << N << endl;
		}
		else
			cout << 1 << endl;		
	}
}

