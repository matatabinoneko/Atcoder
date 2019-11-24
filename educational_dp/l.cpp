#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)
#define M 1000000007
vector<vector<ll>>dp(3005,vector<ll>(3005,0));

int main(void){
    ll n; cin >> n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) dp[i][i] = a[i];
    for(int i=0;i<n-1;i++) dp[i][i+1] = abs(a[i]-a[i+1]);
    for(int i=n-3;0<=i;i--){
        for(int j=i+2;j<n;j++){
            ll left_max, right_max;
            if(a[i+1] < a[j]) left_max = a[i] - a[j] + dp[i+1][j-1];
            else left_max = a[i] - a[i+1] + dp[i+2][j];

            if(a[i] < a[j-1]) right_max = a[j] - a[j-1] + dp[i][j-2];
            else right_max = a[j] - a[i] + dp[i+1][j-1];

            dp[i][j] = max(left_max,right_max);
        }
    }
    cout << dp[0][n-1] << endl;
    return 0;
}