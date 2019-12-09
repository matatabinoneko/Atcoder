#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    string s; cin >> s;
    for(int i=0;i<s.length();i++){
        cout << char('A'+(s[i]-'A'+n)%('Z'-'A'+1));
    }cout << endl;
    return 0;
}