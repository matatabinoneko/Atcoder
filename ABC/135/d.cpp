#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD int(pow(10,9)+7)

ll dp[int(pow(10,5)+1)][13] = {};

int main(void){
    string s;
    cin >> s;
    ll n = s.length();
    dp[0][0]=1;
    for(ll i=0;i<s.length();i++){
        ll c;
        if(s[i]=='?') c = -1;
        else c = s[i]-'0';
        for(ll j=0;j<10;j++){
            if (c != -1 && c != j) continue;
            for(ll k=0;k<13;k++){
                dp[i+1][(k*10+j)%13] += dp[i][k]; 
            }
        }
        for(ll j=0;j<13;j++){
            dp[i+1][j] %= MOD;
        }
    }
    cout << dp[n][5]<< endl;
    return 0;

}