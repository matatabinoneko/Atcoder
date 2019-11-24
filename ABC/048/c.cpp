#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,x; cin >> n >> x;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll ans = 0;
    for(int i=1;i<n;i++){
        ll need_cnt = a[i-1]+a[i] - x;
        if(0<need_cnt){
            a[i] -= min(a[i],need_cnt),ans += need_cnt;
        }
    }
    cout << ans << endl;
    return 0;
}