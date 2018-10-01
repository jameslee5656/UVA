#include <iostream>
using namespace std;
int main(void)
{
    char cardNum[16];
    int N;
    scanf("%d", &N);
    for(int a = 0; a < N; a++)
    {
        for(int b = 0; b < 4; b++)
        {
            scanf("%s", &cardNum[4*b]);
        }

        int doub = 0;
        int undoub = 0;

        for(int b = 0; b < 16; b = b + 2)
        {
            int add = cardNum[b] - 48;
            int digit = add*2;
            while(digit != 0)
            {
                doub += (digit%10);
                digit /= 10;
            }
        }
        for(int b = 1; b < 16; b = b + 2)
        {
            int add = cardNum[b] - 48;
            undoub += add;
        }
        if((undoub+doub) %10 == 0)
        {
            cout << "Valid" << endl;
        }
        else
        { 
            cout << "Invalid" << endl;
        }
    }
}