#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,k; cin >> n >>k;
    string s; cin >> s;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if((s[i]=='L'&& 0<=i-1 && s[i-1]=='L') || (s[i]=='R' && i+1<n && s[i+1]=='R')) cnt++;
    }
    ll cnt_r = 0;
    int i=0;
    while(i<n){
        if(s[i]=='L'){
            while(i<n && s[i]=='L'){
                if(i+1<n && s[i+1]=='R'){
                    i++;
                    break;
                }else{
                    i++;
                }
            } 
            while(i<n && s[i]=='R'){
                if(i+1<n && s[i+1]=='L'){
                    i++;
                    cnt_r++;
                    break;
                }else{
                    i++;
                }
            }
        }else{
            i++;
        }
    }
    ll ans = cnt + min(k,cnt_r)*2;
    k -= cnt_r;
    if(0<k && s[0]=='R' && s[n-1]=='R' && ans < n-1) ans+=2;
    else if(0<k && s[0]=='R' && ans < n-1) ans++;
    else if(0<k && s[n-1]=='R' && ans < n-1) ans++;    
    cout << ans << endl;
    // cout << cnt << ' ' << cnt_r << endl;
    return 0;
}
