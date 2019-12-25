#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int idx = 1,ans=0;
    for(int i=0;i<n;i++){
        if( a[i]==idx){
            idx++;
        }else{
            ans++;
        }
    }
    if(ans==n){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}