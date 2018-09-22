#include <iostream>
using namespace std;
int main (void)
{
    long long int input = 1;
    int count;
    while (scanf("%lld", &input) && input)
    {
        count = 0;
        for(int k = 9; k >= 0; k--)
        {
            if((input - k)% 9 == 0)
            {
                if (count == 0)
                    cout << (input - k)/9*10 + k;
                else
                    cout << " " << (input - k)/9*10 + k;
                count++;
            }
        }
        cout << endl;
    }
}
