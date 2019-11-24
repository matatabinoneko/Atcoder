#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n; cin >> n;
    string s; cin >> s;
    int r=0,l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            r++;
        }else{
            if( 0<r){
                r--;
            }
        }
    }
    for(int i=n-1;0<=i;i--){
        if(s[i]==')'){
            l++;
        }else{
            if( 0<l){
                l--;
            }
        }
    }
    string r_bracket(r,')'), l_bracket(l,'(');
    // cout << r_bracket << ' ' << l_bracket << endl;
    s = l_bracket + s + r_bracket;
    cout << s << endl;
    return 0;
}