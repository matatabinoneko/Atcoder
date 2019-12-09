#include<bits/stdc++.h>
#include<vector>

using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>ans(n,0);
    for(int i=0;i<n-1;i++){
        int c,s,f; cin >> c >> s >> f;
        for(int j=0;j<=i;j++){
            if(ans[j]<s) ans[j] = s+c;
            else ans[j] = ((ans[j]-s+f-1)/f)*f + s + c;
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}
