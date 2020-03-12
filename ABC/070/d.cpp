#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>>edge(1e5+1);
vector<vector<int>>cost(1e5+1);
vector<int>root(1e5+1,0);
vector<bool>have_been(1e5+1,false);

void dfs(int node,int cnt){
    if(have_been[node]==true) return;
    // cout <<"node:" << node << endl;
    have_been[node] = true;

    for(int i=0;i<edge[node].size();i++){
        if(have_been[edge[node][i]]==false){
            have_been[node]=true;
            // cout << "cost:" << cost[node][i] << ' ';
            root[edge[node][i]] = cnt + cost[node][i];
            dfs(edge[node][i],root[edge[node][i]]);
        }
    }
    return;
}

signed main(void){
    int n; cin >> n;
    for(int i=0;i<n-1;i++){
        int a,b,c; cin >> a >> b >> c;
        a--; b--;
        // cout << a << ' ' << b << endl;
        edge[a].push_back(b);
        edge[b].push_back(a);
        cost[a].push_back(c);
        cost[b].push_back(c);
    }
    int q,k; cin >> q >> k;
    k--;

    // for(int i=0;i<n-1;i++){
    //     cout << "edge:" << i << ": ";
    //     for(int j=0;j<edge[i].size();j++){
    //         cout << edge[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    dfs(k,0);


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<edge[i].size();i++){
    //         cout << root[edge[i][j]] << ' ';
    //     }
    // }cout << endl;


    for(int i=0;i<q;i++){
        int x,y; cin >>x >> y;
        x--;y--;
        cout << root[x]+root[y] << endl;
    }
    return 0;
}