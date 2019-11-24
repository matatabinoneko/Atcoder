#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,k; cin >> n >> k;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        if(k <=tmp) ans++;
    }
    cout << ans << endl;
    return 0;
}
