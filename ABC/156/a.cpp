#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n,r; cin >> n >> r;
    if(10<=n) cout << r << endl;
    else{
        cout << r + (100*(10-n)) << endl;
    }
    return 0;
}