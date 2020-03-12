#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n,a,b; cin >>n >>a >> b;
    int ans = (n/(a+b))*a + min(a,(n-(a+b)*(n/(a+b))));
    cout << ans << endl;
    

}