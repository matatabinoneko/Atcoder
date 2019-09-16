#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    ll n; cin >> n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.rbegin(),a.rend());
    ll ans = a[0] - a[1];
    for(int i=2;i<n;i++){
        if((0 <= ans && 0 <=a[i]) || (0 > ans && 0 > a[i])) ans -= a[i];
        else ans += a[i];
    }
    cout << abs(ans) << endl;
    return 0;
}