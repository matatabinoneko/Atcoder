#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max_edge int(pow(10,6))
typedef pair<int,int>P;

vector<ll>ans(max_edge,0);
vector<ll> cost(max_edge,0);
vector<ll>previous_edge(max_edge);
vector<vector<ll>>next_edge(max_edge);

void dfs(ll edge){
    ans[edge] = ans[previous_edge[edge]] + cost[edge];
    for(int i=0;i<next_edge[edge].size();i++){
        dfs(next_edge[edge][i]);
    }
}

int main(void){
    int n,q; cin >> n >> q;
    for(int i=0;i<n-1;i++){
        ll a,b; cin >>a >> b;
        previous_edge[b]=a;
        next_edge[a].push_back(b);
    }


    for(int i=0;i<q;i++){
        ll p,x; cin >> p >> x;
        cost[p]+=x;
    }

    // for(int i=0;i<=n;i++) cout << cost[i] << ' ';cout << endl;
    dfs(1);
    for(int i=1;i<=n;i++){
        cout << ans[i];
        if(i!=n) cout << ' ';
    } 
    cout << endl;
    return 0;
}
