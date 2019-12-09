#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include <numeric>
#include<cmath>
#include<string>
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
    ll int n;
    cin >> n;
    vector<ll>A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    vector<ll>l(n+1);
    l[0]=0,l[1]=A[0];
    vector<ll>r(n+1);
    r[n]=0,r[n-1]=A[n-1];
    for(int i=2;i<=n;i++){
        l[i] = euclidean_gcd(l[i-1],A[i-1]);
    }    
    for(int i=n-2;i>=0;i--){
        r[i] = euclidean_gcd(r[i+1],A[i]);
    }    
    ll ans =0;
    for(int i=0;i<n;i++){
        ll tmp;
        if(i==0){
            tmp = r[i+1];
        }else if(i==n-1){
            tmp = l[i];
        }else{
            tmp = euclidean_gcd(l[i],r[i+1]);
        }
        if(ans < tmp){
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}
