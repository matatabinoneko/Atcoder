#include<bits/stdc++.h>
using namespace std;
#define int long long

//r以上l未満の範囲でkeisan
int calc(int n){
    int ret = n*(n+1)/2;
    return ret;
}

signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int ans = 0;
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i] < a[i+1]){
            cnt++;
        }else{
            ans += calc(cnt);
            cnt=1;
        }
        // cout << ans << endl;
    }
    ans += calc(cnt);
    cout << ans << endl;
    return 0;
}