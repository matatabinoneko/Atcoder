#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<vector<int>>x(n,vector<int>(2));
    for(int i=0;i<n;i++){
        int a,b; cin >>a >> b;
        x[i] = {a+b,a-b};
    }
    sort(x.begin(),x.end());
    // for(int i=0;i<n;i++){
    //     cout << x[i][1] << ' ' << x[i][0] << endl;
    // }cout << endl;
    int ans = 0,start=-1*1e10;
    for(int i=0;i<n;i++){
        if(start <= x[i][1]){
            ans++;
            start = x[i][0];
        }
    }
    cout << ans << endl;
    return 0;
}