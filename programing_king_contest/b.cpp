#include<bits/stdc++.h>
using namespace std;
#define int long long
#define M 998244353

signed main(void){
    int n; cin >> n;
    vector<vector<int>>d(n);
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        d[tmp].push_back(tmp);
    }
    int ans = 1;
    for(int i=0;i<n;i++){
        int kaijo=1;
        for(int j=1;j<=d[i].size();j++) kaijo *= j;

        ans = (ans*(kaijo/pow(2,d[i].size())))%M;
    }
    cout << ans << endl;
    return 0;
}