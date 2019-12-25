#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>>e(1e5);

vector<int>aoki(1e5,1e9), taka(1e5,0);

vector<bool>flag(1e5,false);



void aoki_bfs(int node,int cnt){
    aoki[node] = cnt;
    for(int i=0;i<e[node].size();i++){
        if(flag[e[node][i]]==false){
            flag[e[node][i]]=true;
            aoki_bfs(e[node][i],cnt+1);
        }
    }
}

void taka_bfs(int node,int cnt){
    taka[node] = cnt;
    for(int i=0;i<e[node].size();i++){
        if(flag[e[node][i]]==false){
            flag[e[node][i]]=true;
            taka_bfs(e[node][i],cnt+1);
        }
    }
}

signed main(void){
    int n,u,v; cin >> n >> u >> v;u--;v--;
    for(int i=0;i<n-1;i++){
        int a,b; cin >> a >> b; a--;b--;
        e[a].push_back(b);
        e[b].push_back(a);
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<e[i].size();j++){
    //         cout << e[i][j] << ' ';
    //     }cout << endl;
    // }


    for(int i=0;i<n;i++)flag[i] = false;
    flag[u]=true;
    taka_bfs(u,0);
    for(int i=0;i<n;i++)flag[i] = false;
    flag[v] = true;
    aoki_bfs(v,0);

    // cout << endl;
    // for(int i=0;i<n;i++){
    //     cout << aoki[i] << ' ' << taka[i] << endl;
    // }cout << endl;

    int ans = 0;
    for(int i=0;i<n;i++){
        if(taka[i]<aoki[i]){
            int tmp = aoki[i]-1;
            if(ans < tmp) ans = tmp;
        } 
    }
    cout << ans << endl;
    return 0;
}