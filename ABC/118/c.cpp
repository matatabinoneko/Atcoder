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
    ll a,b;
    cin >> a;
    for(int i=0;i<n-1;i++){
        cin >> b;
        a = euclidean_gcd(a,b);
    }
    cout << a<<endl;

    
    return 0;
}