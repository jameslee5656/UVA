#include <iostream>
using namespace std;
int main(void)
{
    int N;
    scanf("%d", &N);
    for(int a = 0; a < N; a++)
    {
        int L, train[51];
        scanf("%d", &L);
        for(int b = 0; b < L; b++)
        {
            scanf("%d", &train[b]);
        }
        int count = 0;
        for(int b = 0; b < L; b++)
        {
            for(int c = 0; c < L-1; c++)
            {
                if(train[c] > train[c+1])
                {
                    int tempt = train[c];
                    train[c] = train[c + 1];
                    train[c + 1] = tempt; 
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count <<  " swaps." << endl;
    }
}