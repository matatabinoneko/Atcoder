#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n; cin >>n;
    vector<int>p(n);
    int cnt=0;
    for(int i=0;i<n;i++) cin >> p[i];
    for(int i=0;i<n;i++){
        // cout << i+1 << ' ' << p[i] << endl;
        if(i+1==p[i]){
            if(i!=p.size()-1) p[i+1] = p[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}