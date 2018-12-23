#include <iostream>
using namespace std;
int a[5];
int func(int n);
int main(void){

	a[0] = -1;
	cout << func(0);
	
}
int func(int n){
	if (a[n] != -1){
		return a[n];
	}
	cout << "function operate" << endl;
}

