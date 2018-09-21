#include <iostream>
using namespace std;
int main(void)
{
	int num;
	scanf("%d",&num);
	
	for(int a = 0; a < num; a++)
	{
		int am,fre;
		scanf(" %d %d",&am, &fre);
		for(int b = 0; b < fre; b++)
		{
			for(int c = 0; c < am; c++)
			{
				for(int d = 0; d < c; d++)
				{
					printf("%d",c);
				}
				cout << endl;
			}
			for(int c = am; c > 0; c--)
			{
				for(int d = 0; d < c; d++)
				{
					cout << c;
				}
				cout << endl;
			}			
		}
	}
}
