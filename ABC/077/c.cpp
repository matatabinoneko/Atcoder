#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll>a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin >> a[i];sort(a.begin(),a.end());
    for(int i=0;i<n;i++) cin >> b[i];sort(b.begin(),b.end());
    for(int i=0;i<n;i++) cin >> c[i];sort(c.begin(),c.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        auto Iter_a = lower_bound(a.begin(),a.end(),b[i])-a.begin();
        auto Iter_c = c.end()-upper_bound(c.begin(),c.end(),b[i]);
        ans += Iter_a*Iter_c;
    }
    cout << ans << endl;
    return 0;
}