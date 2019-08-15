#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
bool sortcol1( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 return v1[1] < v2[1]; 
} 
bool sortcol0( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 return v1[0] < v2[0]; 
} 
int main(){
    // cout << "hello world" <<  endl;
    int num = 0, a = 0, b = 0;
    vector<vector<int> > v;
    vector<vector<int> > schedule;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)// 
    {
        vector<int> tmp;
        scanf(" %d %d", &a, &b);
        tmp.push_back(a);
        tmp.push_back(b);
        v.push_back(tmp);
    }
    while (!v.empty()){
        sort(v.begin(), v.end(), sortcol1);
        sort(v.begin(), v.end(), sortcol0);
        schedule.push_back(v[0]);// Add i to schedule
        // remove compatible ones in schedule
        for(int i = 1; i < v.size(); i++){
            if (v[0][1] > v[i][0]){
                v.erase(v.begin()+i);
            } 
        }
        v.erase(v.begin());
    }
    for (int i = 0; i < schedule.size(); i++)// print out the outcome
    {
        cout << schedule[i][0] << " " << schedule[i][1] << endl;
    }
}