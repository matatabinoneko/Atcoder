#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s; cin >> s;
    ll ans = 0;
    for(int i=1;i<s.length();i++){
        if(s[i] != s[i-1]) ans++;
    }
    cout << ans << endl;
    return 0;
}