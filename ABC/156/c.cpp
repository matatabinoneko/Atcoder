#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>a(101,0);
    for(int i=0;i<n;i++){
        int x; cin >> x;
        for(int j=1;j<=100;j++){
            a[j] += pow(j-x,2);
        }
    }
    int ans = 1e10;
    for(int i=1;i<a.size();i++){
        if(a[i]<ans) ans = a[i];
    }
    cout << ans << endl;
    return 0;
}