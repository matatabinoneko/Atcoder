#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    ll cnt=0;
    for(int i=0;i<n;i++){
        int l,r; cin >> l >> r;
        cnt += r-l+1;
    }
    cout << cnt << endl;
    return 0;
}