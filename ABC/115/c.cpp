#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,9)
int main(void){
    ll n,k;
    cin >> n >> k;
    vector<ll> h(n);
    for(ll i=0;i<n;i++){
        cin >> h[i];
    }
    sort(h.begin(),h.end());
    ll ans = INF;
    for(ll i=0;i<=n-k;i++){
        ll tmp = (h[i+k-1]-h[i]);
        if(tmp<ans){
            ans = tmp;
        }
        // cout << ans << endl;
    }
    cout << ans << endl;
}