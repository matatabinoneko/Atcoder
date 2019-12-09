#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,m; cin >> n >> m;
    vector<vector<ll>>v(n+1);
    for(int i=0;i<m;i++){
        ll a,b; cin >> a >> b;
        v[b].push_back(a);
    }

    vector<bool>able(n+1,false);
    queue<vector<ll>> que;
    que.push({0,0});
    while(que.size()!=0){
        vector<ll>tmp = que.front();que.pop();
        ll people = tmp[0];
        ll cnt = tmp[1];
        if(3 < cnt) continue;
        else{
            able[people] = true;
            for(int i=0;i<v[people].size();i++){
                que.push({v[people][i],cnt+1});
            }
        }
    }
    for(int i=1;i<able.size();i++){
        if(able[i]==true) cout << "Yes" << endl;
        else cout << "No" <<endl;
    }
    return 0;
}