#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,a,b; cin >> n >> a >> b;
    vector<ll>x(n);
    for(int i=0;i<n;i++) cin >> x[i];
    ll ans = 0;
    for(int i=0;i<n-1;i++){
        if((x[i+1]-x[i])*a<=b) ans+= (x[i+1]-x[i])*a;
        else ans += b;
    }
    cout << ans << endl;
    return 0;
}