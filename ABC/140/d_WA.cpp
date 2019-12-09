#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    ll i=0,ans=0;
    bool L_exist = false;
    while(i<s.length()-1 && 0<k){
        if(s[i]=='L'){
            L_exist = true;
            if(s[i+1]=='R'){
                i++;
                while(i<s.length()){
                    if(s[i]=='L'){
                        ans+=2;
                        k--,i--;
                        break;
                    }
                    i++;
                }
            }
        }
        i++;
    }
    if(L_exist == true && 0<k && s[0]=='R') ans++,k--;
    if(L_exist == true && 0<k && s[s.length()-1]=='R') ans++,k--;

    for(int i=0;i<n;i++){
        if((0<i && s[i]=='L' && s[i-1]=='L') || (i<s.length()-1 && s[i]=='R'&& s[i+1]=='R')) ans++;
    }
    cout << ans << endl;
    return 0;
}
