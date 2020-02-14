#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>>edge(1e5+2);
vector<bool>flag(1e5+2,false);

bool dfs(int index){
    if(flag[index]==true) return false;
    flag[index] = true;
    for(int i=0;i<edge[index].size();i++){
        dfs(edge[index][i]);
    }
    return true;
}

signed main(void){
    int n,m; cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y,z; cin >>x >>y >> z;
        x--;y--;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if (dfs(i)==true) ans++;
    }
    cout <<ans << endl;
    return 0;
}