#include<bits/stdc++.h>
using namespace std;

#define int long long 


signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >>a[i];
    int ans = 1e9;
    for(int i=-100;i<=100;i++){
        int tmp = 0;
        for(int j=0;j<n;j++){
            tmp += pow((a[j]-i),2);
        }
        if(tmp < ans) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}