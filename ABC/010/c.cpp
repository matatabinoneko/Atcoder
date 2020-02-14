#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int sx,sy,tx,ty,t,v; cin >> sx >> sy >> tx >> ty >> t >> v;
    int n; cin >> n;
    // vector<int>x(n),y(n);
    // for(int i=0;i<n;i++) cin >> x[i] >> y[i];

    int movable = t*v;

    for(int i=0;i<n;i++){
        int x,y; cin >> x >> y;
        if (pow(pow(sx-x,2)+pow(sy-y,2),0.5) + pow(pow(tx-x,2)+pow(ty-y,2),0.5) <= movable){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}