#include <iostream>
#include <limits.h>
#include <stdio.h>
using namespace std;
int max (int a, int b){return(a>=b)?a:b;}
int* cutRod(int price [], int n){
	int *highestValue = new int(n+1);
	highestValue[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int max_val = INT_MIN;
		for(int j = 0; j < i; j++){ 
			max_val = max(max_val, price[j] + highestValue[i-j-1]);
		}
		highestValue[i] = max_val;
	}
	return highestValue;
}
int main(void){
	int size = 0;
	scanf("%d", &size);
	int *price = new int(size);
	for(int a = 0; a < size; a++)
	{
		scanf(" %d", &price[a]);
	}
	int *highestValue = cutRod(price,size);
	for(int a = 0; a <= size; a++)
	{
		cout << highestValue[a] << endl;
	}
	delete price;
}
