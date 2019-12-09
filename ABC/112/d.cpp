#include<bits/stdc++.h>
using namespace std;

#define ll long long

unsigned euclidean_gcd(unsigned a, unsigned b) {
  while(1) {
    if(a < b) swap(a, b);
    if(!b) break;
    a %= b;
  }
  return a;
}

int main(void){
 
    ll n,m;
    cin >> n >> m;
    ll ans = 0;
    vector<ll>euclid;
    for(int i=0;i<=pow(m,0.5);i++){
        ll tmp = euclidean_gcd(m,i);
        euclid.push_back(tmp);
        euclid.push_back(m/tmp);
    }
    sort(euclid.rbegin(),euclid.rend());
    for(ll i=0;i<euclid.size();i++){
        // cout << euclid[i]<<endl;
        if(euclid[i]<=m/n){
            cout << euclid[i]<<endl;
            break;
        }
    }


}