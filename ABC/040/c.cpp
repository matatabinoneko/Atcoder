#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>dp(1000005,0);


signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    dp[1] = abs(a[0]-a[1]);
    for(int i=2;i<n;i++){
        if(dp[i-1] + abs(a[i]-a[i-1]) < dp[i-2] + abs(a[i]-a[i-2])){
            dp[i] = dp[i-1] + abs(a[i]-a[i-1]);
        }else{
            dp[i] = dp[i-2] + abs(a[i]-a[i-2]);
        }
    }
    // for(int i=0;i<n;i++){
    //     cout << dp[i] << ' ';
    // }
    cout << dp[n-1] << endl;
    return 0;
}