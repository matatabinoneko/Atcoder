#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)

vector<vector<ll>>g(100005);
vector<ll>memo(100005,-1);

ll pass(int v){
    if(memo[v]==-1){
        if(g[v].size() <= 0){
            memo[v]=0;
        } 
        else{
            ll max_pass = 0;
            for(int i=0;i<g[v].size();i++){
                ll tmp = pass(g[v][i]);
                if(max_pass < tmp) max_pass = tmp;
            }
            memo[v] = max_pass+1;
        }
    } 
    return memo[v];
}

int main(void){
    ll n,m; cin >> n >> m;
    for(int i=0;i<m;i++){
        ll x,y; cin >> x >> y; x--;y--;
        g[x].push_back(y);
    }
    for(int i=0;i<n;i++){
        pass(i);
    }
    cout << *max_element(memo.begin(),memo.end()) << endl;
    return 0;
}