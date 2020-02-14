#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<double>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.rbegin(),a.rend());
    double half = a[0]/2,tmp=1000000000;
    // cout << half << endl;
    int ans;
    for(int i=1;i<n;i++){
        // cout << abs(half-a[i]) << endl;
        if(abs(half-a[i])<tmp){
            ans = a[i];
            tmp = abs(half-a[i]);
        } 
        // cout << ans << endl;
    }
    cout << a[0] << ' ' << ans << endl;
    return 0;
}