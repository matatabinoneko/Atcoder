#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,m; cin >> n >> m;
    if(m/2 < n) cout << m/2 << endl;
    else{
        cout << n +(m - (2*n))/4 << endl;
    }


    return 0;
}