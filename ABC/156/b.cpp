#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n,k; cin >> n >> k;
    int cnt=0;
    while(0<n){
        n /= k;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}