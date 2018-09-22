#include <iostream>
#include <math.h>
using namespace std;
void swapArray(int *,int);
int specPartion(int *,int *, int, int);
void quickSort(int *, int *, int, int);
int main(void)
{
	int N = 0, M = 0;
	while(scanf("%d %d",&N,&M))
	{
		if((N == 0)&&(M == 0))
		{
			cout << "0 0" << endl;
			exit(0);
		}

		int sets[20000],modSets[20000];
		for(int b = 0; b < N; b++)
		{
			scanf("%d", &sets[b]);

			modSets[b] = sets[b] % M;
		}

		quickSort(sets, modSets, 0, N - 1);

		cout << N << " " << M << endl;
		for(int b = 0; b < N; b++)
		{
			cout << sets[b]  << endl;
		}
	}
}
void quickSort(int *sets, int *modSets, int front, int end)
{
	if(front < end)
	{
		int pivotIndex = specPartion(sets, modSets, front, end);
		quickSort(sets, modSets, front, pivotIndex - 1);
		quickSort(sets, modSets, pivotIndex + 1, end);
	}
}
void swapArray(int *whereA, int *whereB)
{
	int tempt = *whereB;
	*whereB = *whereA;
	*whereA = tempt;
}
int specPartion(int *sets,int *modSets, int front, int end)
{
	int i = front - 1;
	int modPivot = modSets[end];
	int pivot = sets[end];
	for(int j = front; j < end; j++)
	{
		if(modSets[j] < modPivot)
		{
			i++;
			swapArray(&modSets[j], &modSets[i]);
			swapArray(&sets[j], &sets[i]);
		}
		else if((modSets[j] == modPivot)&&
			(abs(sets[j] % 2) == 1)&&(abs(pivot % 2) == 0))
		{
			i++;
			swapArray(&modSets[j], &modSets[i]);
			swapArray(&sets[j], &sets[i]);
		}
		else if((modSets[j] == modPivot)&&
			(abs(sets[j] % 2) == 1)&&(abs(pivot % 2) == 1)&&
			sets[j] > pivot)
		{
			i++;
			swapArray(&modSets[j], &modSets[i]);
			swapArray(&sets[j], &sets[i]);
		}
		else if((modSets[j] == modPivot)&&
			(abs(sets[j] % 2) == 0)&&(abs(pivot % 2) == 0)&&
			sets[j] < pivot)
		{
			i++;
			swapArray(&modSets[j], &modSets[i]);
			swapArray(&sets[j], &sets[i]);					
		}
	}
	i++;
	swapArray(&modSets[end], &modSets[i]);
	swapArray(&sets[end], &sets[i]);

	return i;	
}