#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll x;cin >> x;
    ll ans = (x/11)*2;
    ans += (x%11+5)/6;
    cout << ans << endl;

    return 0;
}