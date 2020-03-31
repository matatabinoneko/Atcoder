#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n, x, y; cin >> n >> x >> y;x--;y--;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int without = abs(j-i);
            int with = min(abs(i-x)+abs(j-y)+1, abs(j-x)+abs(i-y)+1);

            int tmp = min(with, without);
            // cout << i << ' ' << j << ' ' << tmp << endl;
            ans[tmp]++;
        }
    }
    for(int i=1;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}