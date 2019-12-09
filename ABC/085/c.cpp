#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,m; cin >> n >> m;
    ll max_z = m/1000;
    for(ll x=0;x<=n;x++){
        for(ll y=0;y<=n;y++){
            ll z = max_z-(5*y)-(10*x);
            if(x+y+z==n && 0 <= min(x,min(y,z))){
                cout << x << ' ' << y << ' ' << z << endl;
                return 0;
            }
        }
    }

    cout << -1 <<' ' <<  -1 << ' ' << -1 << endl;
    return 0;
}