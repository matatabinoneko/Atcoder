#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include <numeric>
#include<cmath>
#include<string>
using namespace std;
#define ll long long

int main(void){
    string s;
    cin >> s;
    int zero = count(s.begin(),s.end(),'0');
    int one = count(s.begin(),s.end(),'1');
    if(zero<one){
        cout << zero*2<<endl;
    }else{
        cout << one*2 << endl;
    }
}