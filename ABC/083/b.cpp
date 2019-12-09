#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    int a,b; cin >> a >> b;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll cnt=0;
        string s= to_string(i);
        for(int j=0;j<s.length();j++){
            cnt += s[j]-'0';
        }
        if(a <= cnt && cnt <= b) ans+=i;
    }
    cout << ans << endl;
    return 0;
}