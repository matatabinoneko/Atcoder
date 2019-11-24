#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> P;

int main(void){
    ll n; cin >> n;
    set<P>a;
    for(ll i=1;i<=n;i++){
        ll tmp; cin >> tmp;
        a.insert(P{tmp,i});
    }
    for(auto iter=a.begin();iter!=a.end();iter++){
        P p = *iter;
        cout << p.second;
        if(iter!=--a.end()) cout << ' ';
    }
    cout << endl;
    return 0;
}
