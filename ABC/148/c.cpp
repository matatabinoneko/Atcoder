#include<bits/stdc++.h>
using namespace std;
#define int long long

int euclidean_gcd(int a, int b) {
  while(1) {
    if(a < b) swap(a, b);
    if(!b) break;
    a %= b;
  }
  return a;
}

signed main(void){
    int a,b; cin >> a >> b;
    int c = euclidean_gcd(a,b);
    cout << a*b/c << endl;
    return 0;
}