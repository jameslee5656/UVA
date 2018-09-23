#include <iostream>
using namespace std;
int main(void)
{
    int n;
    scanf("%d", &n);
    for(int a = 0; a < n; a++)
    {
        int input, orgin;
        int output = 0;
        int count = 0;
        scanf("%d", &input);
        orgin = input;
        cout << "Case #" << a+1 << ": " <<  input << " is ";
        do
        {
            while(input != 0)
            {
                output += (input%10)*(input%10);
                input = input / 10;
            }
            input = output;
            output = 0;
            count++;
        }while(!((input ==  1)||(input == orgin)||count == 50));
        //maybe not come back to itself but somewhere Si

        if(input == 1)
        {
            cout << "a Happy number." << endl;
        } 
        else
        {
            cout << "an Unhappy number." << endl;
        }         
    }
}