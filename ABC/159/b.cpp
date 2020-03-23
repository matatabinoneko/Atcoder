#include<bits/stdc++.h>
using namespace std;
#define int long long

bool kaibun(string s){
    // cout << s << endl;
    int l = s.length()-1,r=0;
    while(0<l-r){
        if(s[r]!=s[l]) return false; 
        r++,l--;
    }
    return true;
}

signed main(void){
    string s; cin >> s;
    if(kaibun(s.substr(0,s.length())) && kaibun(s.substr(0,(s.length()-1)/2)) && kaibun(s.substr((s.length()+3)/2 - 1,s.length() - ((s.length()+3)/2 - 1)))){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}