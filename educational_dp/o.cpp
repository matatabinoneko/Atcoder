#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int long long
#define max_n 21
#define mask (1<<max_n)
vector<vector<int>>dp(max_n+1,vector<int>(mask,0));

signed main(void){
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin >> a[i][j];
    for(int i=0;i<n;i++){
        if(a[0][i]==1) dp[1][1<<i] = 1;
    }

    for(int i=2;i<=n;i++){
        for(int j=0;j<n;j++){
            if(a[i-1][j]==0) continue;
            for(int k=0;k<mask;k++){
                if((k&(1<<j))==0){
                    dp[i][(1<<j)+k] = (dp[i][(1<<j)+k] + dp[i-1][k])%M;
                }
            }
        }
    }

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<10;j++){
    //         cout << dp[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;
    
    cout << accumulate(dp[n].begin(),dp[n].end(),0) << endl;
    return 0;
}
