#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<double>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.rbegin(),a.rend());
    double num=1e9+5;
    int ans;
    double tmp=double(a[0])/2;
    for(int i=1;i<n;i++){
        if (abs(tmp-a[i])<num )num = abs(tmp-a[i]),ans = a[i];
    }
    cout << a[0] << ' ' << ans << endl;
    return 0;
}