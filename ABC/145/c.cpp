#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    int cnt=1;
    for(int i=1;i<=n;i++) cnt*=i;
    double ans = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            double tmp = pow(pow(x[i]-x[j],2),0.5) + pow(pow(y[i]-y[j],2),0.5);
            ans += tmp*cnt;
        }
    }
    cout << ans << endl;
    return 0;
}