#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)

int main(void){
    ll n,max_w; cin >> n >> max_w;
    vector<ll>w(n+1),v(n+1);
    for(int i=1;i<=n;i++) cin >> w[i] >> v[i];
    vector<vector<ll>>weight(n+1,vector<ll>(100005,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<weight[0].size();j++){
            ll a=INF,b=INF;
            if(weight[i-1][j]!=0) a = weight[i-1][j];
            if(j-v[i]==0||(0<=j-v[i] && weight[i-1][j-v[i]]!=0)) b = weight[i-1][j-v[i]] + w[i];
            if(a != INF || b != INF) weight[i][j] = min(a,b);
        }
    }
    // cout << min_element(weight[n].begin(),weight[n].end()) - weight[n].begin() << endl;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<100;j++){
    //         cout << weight[i][j] << ' ';
    //     }cout << endl;
    // }
    ll ans;
    for(int i=0;i<weight[n].size();i++){
        if(weight[n][i] != 0 && weight[n][i]<=max_w) ans = i;
    }
    cout <<ans << endl;
    return 0;
}