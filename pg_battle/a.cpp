#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,k;cin >> n >> k;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        ans += max((ll)0,tmp-k);
    }
    cout << ans << endl;
    return 0;
}