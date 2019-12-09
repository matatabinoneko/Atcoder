#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,k; cin >> n >> k;
    ll ans = 1;
    while(ans < k && 0<n) ans *= 2,n--;
    cout << ans + k*n << endl;
    return 0;
}