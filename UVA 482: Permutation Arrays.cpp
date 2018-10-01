#include <iostream>
#include <string>
using namespace std;
void qswap(float *, float *);
int main(void)
{
    int N;
    scanf("%d ", &N);   
    for(int a = 0; a < N; a++)
    {    
        if(a != 0)     
            cout << endl; 
        int x[1000];
        string xp[1000];
        int index = 0;
        char c;
        index = 0;
        while (scanf("%d%c", &x[index], &c) == 2) { //point is here
            index++;
            if (c == '\n')
                break;
        }
        for(int b = 0; b < index; b++)
        {
            cin >> xp[x[b] - 1];
        }

        for(int b = 0; b < index; b++)
        {
            cout << xp[b] << endl;
        }
    }
}