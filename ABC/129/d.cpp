#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int h,w; cin >> h >> w;
    vector<string>grid;
    string kabe(w+2,'#');
    grid.push_back(kabe);
    for(int i=0;i<h;i++){
        string s; cin >> s;
        string line = '#'+s+'#';
        grid.push_back(line);
    }
    grid.push_back(kabe);
    // for(int i=0;i<grid.size();i++){
    //     for(int j=0;j<grid[i].length();j++){
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    vector<vector<ll>> r(h+2,vector<ll>(w+2,0)),l(h+2,vector<ll>(w+2,0)),u(h+2,vector<ll>(w+2,0)),d(h+2,vector<ll>(w+2,0));

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(grid[i][j]=='.' && grid[i][j-1]!='#') l[i][j] = l[i][j-1] + 1;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=w;1<=j;j--){
            if(grid[i][j]=='.' && grid[i][j+1]!='#') r[i][j] = r[i][j+1] + 1;
        }
    }

    for(int j=1;j<=w;j++){
        for(int i=1;i<=h;i++){
            if(grid[i][j]=='.' && grid[i-1][j]!='#') u[i][j] = u[i-1][j] + 1;
        }
    }
    for(int j=1;j<=w;j++){
        for(int i=h;1<=i;i--){
            if(grid[i][j]=='.' && grid[i+1][j]!='#') d[i][j] = d[i+1][j] + 1;
        }
    }

    // for(int i=0;i<r.size();i++){
    //     for(int j=0;j<l[i].size();j++){
    //         cout << u[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;


    ll ans = 0;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            ll tmp = r[i][j]+l[i][j]+u[i][j]+d[i][j] + 1;
            if(ans < tmp) ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}