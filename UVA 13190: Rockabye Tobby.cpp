#include <iostream>
using namespace std;
int main(void)
{
    int t;
    scanf("%d", &t);
    for(int a = 0; a < t; a++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char med[3000][15];
        int freq[3000];
        for(int b = 0; b < n; b++)
        {
            scanf("%s %d", med[b], &freq[b]);
        }

        int clock = 0, count = 0;
        while(count != k)
        {
            clock++;
            for(int b = 0; b < n; b++)
            {
                if(clock % freq[b] == 0){
                    cout << clock << " " << med[b] << endl;
                    if(++count != k){ continue;}                       
                    else{break;}                     
                }
            }
        }       
    }
}