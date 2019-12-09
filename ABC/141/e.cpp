#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    ll ans=0;
    vector<vector<int>> dp(5005,vector<int>(5005,0));
    for(int i=n-1;0<=i;i--){
        for(int j=n-1;0<=j;j--){
            if(s[i]==s[j]) dp[i][j] = dp[i+1][j+1] + 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int tmp = min(dp[i][j],j-i);
            if(ans < tmp) ans = tmp;
        }
    }
    cout << ans <<endl;
    return 0;
}