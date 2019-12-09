#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(void){
    ll n,m; cin >> n >> m; n--;
    vector<vector<ll>> ship(n+1);
    for(int i=0;i<m;i++){
        int a,b; cin >> a >> b; a--,b--;
        ship[a].push_back(b);    
    }
    for(int i=0;i<ship[0].size();i++){
        vector<ll> f = ship[ship[0][i]];
        if(f.size() != 0 && *find(f.begin(),f.end(),n)==n){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
