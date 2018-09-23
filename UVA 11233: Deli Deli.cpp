#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string irsin[20];
    string irplr[20];
    int L, N;

    scanf("%d %d", &L, &N);
    for(int a = 0; a < L; a++)
    {
        cin >> irsin[a];
        cin >> irplr[a];
    }

    for(int a = 0; a < N; a++)
    {
        string input;
        bool finish = 0;
        cin >> input;

        for(int b = 0; b < L; b++)
        {
            if(input == irsin[b])
            {
                cout << irplr[b] << endl;
                finish = 1;
                break;
            }
        }
        if(finish == 1){continue;}

        if((input[input.length() - 1] == 'y')&&
           (input[input.length() - 2] != 'a')&&
           (input[input.length() - 2] != 'e')&&
           (input[input.length() - 2] != 'i')&&
           (input[input.length() - 2] != 'o')&&
           (input[input.length() - 2] != 'u'))
        {
            for(int b = 0; b < input.length() - 1; b++)
            {
                cout << input[b];
            }
            cout << "ies" << endl;
            continue;
        }

        if((input[input.length() - 1] == 'o')||
           (input[input.length() - 1] == 's')||
           (input[input.length() - 1] == 'x')||
           (input[input.length() - 2] == 's')&&(input[input.length() - 1] == 'h')||
           (input[input.length() - 2] == 'c')&&(input[input.length() - 1] == 'h'))
        {
            for(int b = 0; b < input.length(); b++)
            {
                cout << input[b];
            }
            cout << "es"<< endl;
            continue;
        }
        if(finish == 0)
        {

            cout << input << "s" << endl;
            continue;
        }
    }
}