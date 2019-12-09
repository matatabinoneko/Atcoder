#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,m; cin >> n >> m;
    ll a,b,c; cin >> a >> b >> c;
    if(a==0 && b==0){
        if(n*c==m){
            cout << 0 << ' ' << 0 << ' ' << n << endl;
            return 0;
        }
    }
    for(int i=0;i<=n;i++){
        if((m-(c-b)*i-b*n)%(a-b)==0 &&  (m-(c-a)*i-a*n)%(b-a)==0){
            ll x =  (m-(c-b)*i-b*n)/(a-b);
            ll y = (m-(c-a)*i-a*n)/(b-a);
            cout << x << ' ' << y << ' ' << i << endl;
            return 0;
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    return 0;
}