#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    string s,t; cin >> s >> t;
    for(int i=0;i<n;i++){
        cout << s[i] << t[i];
    }cout << endl;
    return 0;
}