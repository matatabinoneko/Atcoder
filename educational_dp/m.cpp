#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)
#define M 1000000007
vector<vector<ll>> dp(100+1,vector<ll>(100000+1,0));

int main(void){
    ll n,k; cin >> n >> k;
    vector<ll> a(n+1),sum_a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    sum_a[1] = a[1];
    for(int i=2;i<=n;i++) sum_a[i] = sum_a[i-1] + a[i];
    for(int i=0;i<=a[1];i++) dp[1][i] = 1;
    for(int i=1;i<=n;i++) dp[i][0] = 1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(0 <= j-a[i]-1) dp[i][j] =  (dp[i][j-1] + dp[i-1][j] - dp[i-1][j-a[i]-1])%M;
            else dp[i][j] = (dp[i][j-1] + dp[i-1][j])%M;
        }
    }

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<15;j++){
    //         cout << dp[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    cout << dp[n][k] << endl;
    return 0;
}