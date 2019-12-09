#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    string s; cin >> s;
    s += '$';
    int ans = 1;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) ans++;
    }
    cout << ans << endl;
    return 0;
}
