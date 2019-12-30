#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n,k; cin >> n >> k;
    int r,s,p; cin >> r >> s >> p;
    string t; cin >> t;
    string str;
    for(int i=0;i<t.length();i++){
        if(t[i]=='r') str+= 'p';
        else if(t[i]=='s') str += 'r';
        else str += 's';
    }
    for(int i=0;i<str.length()-k;i++){
        if(str[i] == str[i+k]) str[i+k] = ' ';
    }
    // cout << str << endl;
    int ans = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='r') ans+=r;
        else if(str[i]=='s') ans+=s;
        else if(str[i]=='p') ans+=p;
    }
    cout << ans << endl;
    return 0;
}