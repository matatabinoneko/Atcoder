#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)
#define M 1000000007


int main(void){
    ll n; cin >> n;
    vector<double>p(n);
    for(int i=0;i<n;i++) cin >> p[i];
    vector<vector<double>>dp(n,vector<double>(n+1,0));
    dp[0][0] = p[0],dp[0][1] = 1-p[0];
    for(int i=1;i<n;i++){
        dp[i][0]=dp[i-1][0]*p[i];
    }
    for(int i=1;i<n;i++){
        dp[i][i+1] = dp[i-1][i]*(1-p[i]);
    }
    

    for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i) dp[i][j] = dp[i-1][j-1]*(1-p[i]) + dp[i-1][j] * p[i];
            else break;
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=n;j++){
    //         cout << dp[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    printf("%.10f\n",accumulate(dp[n-1].begin(),dp[n-1].begin()+n/2+1,0.0));
    return 0;
}