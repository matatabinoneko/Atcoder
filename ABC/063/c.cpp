#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    int n; cin >> n;
    vector<ll>s(n);
    set<ll>rest;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i]%10!=0) rest.insert(s[i]);
    }
    ll ans = accumulate(s.begin(),s.end(),0);
    if(ans%10==0){
        if(rest.size()==0){
            cout << 0 << endl;
            return 0;
        } 
        else ans -= *rest.begin();
    }
    cout << ans << endl;


    return 0;
}