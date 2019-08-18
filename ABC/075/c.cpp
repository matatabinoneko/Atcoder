#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max_n 100

vector<bool>have_been(max_n,false);
vector<vector<int>>edge(max_n);
int n,m;

void dfs(int start, int a, int b){
    have_been[start]=true;
    for(int i=0;i<edge[start].size();i++){
        if((start==a && edge[start][i]==b) || (start==b && edge[start][i]==a)) continue;
        if(have_been[edge[start][i]]==true) continue;
        dfs(edge[start][i],a,b);
    }
}

int main(void){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b; cin >> a >> b; a--,b--;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<edge[i].size();j++){
            for(int k=0;k<n;k++) have_been[k]=false;
            dfs(0,i,edge[i][j]);
            for(int k=0;k<n;k++){
                if(have_been[k]==false){
                    ans++;
                    break;
                } 
            } 
        }
    }
    cout << ans/2 << endl;


    return 0;

}