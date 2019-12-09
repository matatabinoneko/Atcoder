#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,p;
vector<vector<ll>>next_v(3000);
bool have_been[3000][3000];
ll v_value[3000];
ll e_value[3000][3000];
bool roop = false;

void dfs(ll v,ll value, bool have_been[3000][3000]){
    if(roop == false){
        for(ll i=0;i<next_v[v].size();i++){
            ll next = next_v[v][i];
            ll next_value = value + e_value[v][next] - p;
            // cout << v <<' ' <<  next << ' ' << value << ' ' <<next_value << endl; 
            if(have_been[v][next]==true){
                 if(next == n-1 && v_value[next] < next_value){
                     roop = true;
                 }
            }else if(v_value[next] < next_value){
                v_value[next] = next_value;
                bool new_have_been[3000][3000];
                for(int j=0; j<3000;j++){
                    for(int k=0;k<3000;k++){
                        new_have_been[j][k] = have_been[j][k];
                    }
                }
                new_have_been[v][next] = true;
                dfs(next,next_value,have_been);
            }
        }
    }
}

int main(void){
    cin >> n >> m >> p;
    for(ll i=0;i<m;i++){
        ll a,b,c; cin >> a >> b >> c;a--,b--;
        next_v[a].push_back(b);
        e_value[a][b] = c;
    }

    for(ll i=0;i<3000;i++){
        v_value[i]=int(pow(10,9)) * (-1);
    }

    
    for(ll i=0;i<3000;i++){
        for(ll j=0;j<3000;j++){
            have_been[i][j]=false;
        }
    }

    dfs(0,0,have_been);
    if(roop == false) cout << max((ll)0,v_value[n-1]) << endl;
    else cout << -1 << endl;
    return 0;
}