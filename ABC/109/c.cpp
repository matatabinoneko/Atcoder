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
    ll n;
    cin >> n;
    vector<ll>city(n+1);
    for(int i=0;i<n+1;i++){
        cin >> city[i];
    }
    sort(city.begin(),city.end());
    for(int i=0;i<n;i++){
        city[i] = city[i+1]-city[i];
    }
    ll ans = city[0];
    for(int i=1;i<n;i++){
        ans = euclidean_gcd(ans,city[i]);
    }
    cout << ans << endl;
    return 0;
}