#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    vector<ll> v(10,0);
    for(int i=0;i<10;i++){
        v[i] = i;
    }

    auto iter = v.end();
    cout << *iter-- << ' ' << *iter << endl;
}