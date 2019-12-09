#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)

int main(void){
    ll n,m,t; cin >> n >> m >> t;
    vector<ll>value(n);
    for(int i=0;i<n;i++)cin >> value[i];
    vector<vector<ll>>cost(n,vector<ll>(m,INF));
    for(int i=0;i<m;i++){
        ll a,b,c; cin >> a >> b >> c;a--;b--;
        cost[a][b] = c;
    }
    vector<ll>d_fw(n,INF),d_back(n,INF);
    d_fw[0] = 0;
    priority_queue<vector<ll>>q;
    q.push({0,d_fw[0]});
    while(q.size()!=0){
        vector<ll>tmp = q.top();q.pop();
        ll e = tmp[0], c = tmp[1];
        if(d_fw[e]<c) continue;
        for(int i=0;i<cost[e].size();i++){
            ll between_c = cost[e][i];
            if(between_c == INF)continue;
            ll next_e = i;
            if(d_fw[e]+between_c < d_fw[next_e]){
                d_fw[next_e] = d_fw[e]+between_c;
                q.push({next_e,d_fw[next_e]});
            }
        }
    }

    d_back[0] = 0;
    priority_queue<vector<ll>>q_back;
    q_back.push({0,d_back[0]});
    while(q_back.size()!=0){
        vector<ll>tmp = q_back.top();q_back.pop();
        ll e = tmp[0], c = tmp[1];
        if(d_back[e]<c) continue;
        for(int i=0;i<cost.size();i++){
            ll between_c = cost[i][e];
            if(between_c == INF)continue;
            ll prev_e = i;
            if(d_back[e]+between_c < d_back[prev_e]){
                d_back[prev_e] = d_back[e]+between_c;
                q_back.push({prev_e,d_back[prev_e]});
            }
        }
    }
    // for(int i=0;i<d_fw.size();i++){
    //     cout << d_fw[i] << ' ';
    // }cout << endl;
    // cout << endl;
    // for(int i=0;i<d_back.size();i++){
    //     cout << d_back[i] << ' ';
    // }cout << endl;    

    ll ans = 0;
    for(int i=0;i<n;i++){
        ll remain_t = t - d_fw[i] - d_back[i];
        ll tmp = remain_t*value[i];
        if(ans < tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}