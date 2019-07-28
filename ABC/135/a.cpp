#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int a,b;
    cin >> a >> b;
    if((a+b)%2==0){
        cout << (a+b)/2 << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;

}