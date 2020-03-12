#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n,m; cin >> n >> m;
    vector<char>ans(n,'0');
    for(int i=0;i<m;i++){
        int s;
        char c; cin >> s >> c;s--;
        if (ans[s]!='0' && ans[s] != c){
            cout << -1 << endl;
            return 0;
        }
        ans[s] = c;
    }



    if(ans[0]=='0'){
        ans[1] = '1';
    }
    for(int i=0;i<n;i++){
        cout << ans[i];
    }
    cout << endl;
    return 0;
}