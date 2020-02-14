#include<bits/stdc++.h>
using namespace std;
#define int long long




signed main(void){
    int n,k; cin >> n>> k;
    int ans = (n-k)*(k-1)*6;
    ans += (n-k)*3;
    ans += (k-1)*3;
    ans += 1;
    // cout << ans << ' ' << pow(n,3) << endl;
    printf("%.20f\n",ans/pow(n,3));
    return 0;
}