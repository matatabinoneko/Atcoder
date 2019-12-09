#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n; cin >> n;
    vector<ll>prime;
    for(int i=2;i<=n;i++){
        bool flag = false;
        for(int j=0;j<prime.size();j++){
            if(i%prime[j]==0){
                flag = true;
            }
        }
        if(flag == false) prime.push_back(i);
    }

    // for(int i=0;i<prime.size();i++){
    //     cout << prime[i] << ' ';
    // }cout << endl;

    vector<ll>cnt(prime.size()+1,0);
    for(int i=2;i<=n;i++){
        for(int j=0;j<prime.size();j++){
            ll tmp = i;
            while(tmp%prime[j]==0){
                cnt[j]++;
                tmp /= prime[j];
                // cout << tmp << ' ';
            }
        }
    }

    // for(int i=0;i<cnt.size();i++){
    //     cout << cnt[i] << ' ';
    // }cout << endl;

    ll ans = 1;
    for(int i=0;i<cnt.size();i++){
        ans = (ans*(cnt[i]+1))%(1000000007);
    }
    cout << ans << endl;
    return 0;
}