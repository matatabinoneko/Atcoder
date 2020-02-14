#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int sum_a = accumulate(a.begin(),a.end(),(int)0);
    int ans = 1e15;
    int tmp = 0;
    for(int i=0;i<n-1;i++){
        tmp += a[i];
        sum_a -= a[i];
        if(abs(tmp-sum_a) < ans){
            ans = abs(tmp-sum_a);
        }
    }
    cout << ans << endl;
    return 0;
}