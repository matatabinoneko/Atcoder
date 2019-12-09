#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll euclidean_gcd(ll a, ll b) {
  while(1) {
    if(a < b) swap(a, b);
    if(!b) break;
    a %= b;
  }
  return a;
}

int main(void){
    ll n; cin >> n;
    vector<ll>t(n);
    for(int i=0;i<n;i++) cin >> t[i];
    ll ans=t[0];
    for(int i=0;i<n;i++){
        ans = ans / euclidean_gcd(ans, t[i]);
        ans = ans * t[i];
    }
    cout << ans << endl;
    return 0;
}