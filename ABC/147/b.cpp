#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    string s; cin >> s;
    int ans = 0;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}