#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)

vector<vector<ll>>dp(3005,vector<ll>(3005,0));

int main(void){
    string s,t; cin >> s >> t;
    s = " " + s;
    t = " " + t;
    for(int i=1;i<s.length();i++){
        for(int j=1;j<t.length();j++){
            if(s[i]==t[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else if(dp[i][j-1]<=dp[i-1][j]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i][j-1];
        }
    }
    string ans = "";
    ll i = s.length()-1, j = t.length()-1;
    while(ans.length()<dp[s.length()-1][t.length()-1]){
        if(s[i]==t[j]) ans += s[i], i--,j--;
        else if(dp[i][j-1] < dp[i][j]) i--;
        else j--;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}


