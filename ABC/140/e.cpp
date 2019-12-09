#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll>p(n),idx(n);
    for(int i=0;i<n;i++){
        cin >> p[i];p[i]--;
        idx[p[i]]=i;
    } 



    set<ll>s;
    s.insert(-1);s.insert(n);
    ll ans = 0;
    for(int i=n-1;0<=i;i--){
        vector<ll> l(2,-1),r(2,n);

        ll index = idx[i];
        s.insert(index);

        // for(auto iter = s.begin();iter!=s.end();iter++){
        //     cout << *iter << '#';
        // }cout << endl;

        // auto itr = s.end();
        // itr--;
        // cout << *itr << endl;

        auto iter = s.find(index);
        if(iter != s.begin()) l[0] = *--iter;
        if(iter != s.begin()) l[1] = *--iter;
        iter = s.find(index);iter++;
        if(iter != s.end()) r[0] = *iter++;
        if(iter != s.end()) r[1] = *iter++;
        // cout << l[1] << ' ' << l[0] << ' '<< index << ' ' << r[0] << ' ' << r[1] << endl;
        ans += (i+1) * ((index - l[0]) * (r[1] - r[0]) + (l[0] - l[1]) * (r[0] - index));
        // cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}