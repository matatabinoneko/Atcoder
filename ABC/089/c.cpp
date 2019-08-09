#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll>cnt(5);
    for(int i=0;i<5;i++){
        cnt[i]=0;
    }

    for(int i=0;i<n;i++){
        string s; cin >> s;
        if(s[0]=='M') cnt[0]++;
        else if(s[0]=='A')cnt[1]++;
        else if(s[0]=='R')cnt[2]++;
        else if(s[0]=='C')cnt[3]++;
        else if(s[0]=='H')cnt[4]++;
    }
    ll ans = 0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                ans += cnt[i]*cnt[j]*cnt[k];
            }
        }
    }
    cout << ans << endl;
    return 0;

}