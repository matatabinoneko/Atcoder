#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    ll n,m; cin >> n >> m;
    ll ans = abs(n-2)*abs(m-2);
    cout << ans << endl;
    return 0;
}