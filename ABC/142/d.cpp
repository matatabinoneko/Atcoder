#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll euclidean_gcd(ll a,ll b) {
  while(1) {
    if(a < b) swap(a, b);
    if(!b) break;
    a %= b;
  }
  return a;
}

int main(void){
    ll a,b; cin >> a >> b;
    set<ll>common,ans;
    for(int i=1;i<=pow(a,0.5);i++){
        if(a%i==0 && b%i==0) common.insert(i);
        ll rev = a/i;
        if(a%rev==0 && b%rev==0) common.insert(rev);
    }
    bool exist=false;
    for(auto iter=common.begin();iter!=common.end();iter++){
        exist=false;
        for(auto jter=ans.begin();jter!=ans.end();jter++){
            if(euclidean_gcd(*iter,*jter)!=1){
                exist=true;
                break;
            } 
        }
        if(exist==false) ans.insert(*iter);
    }
    cout << ans.size() << endl;
    return 0;
}
