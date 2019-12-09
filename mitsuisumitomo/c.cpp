#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int x; cin >> x;
    int a = x/100;
    if(100*a <= x && x<=105*a){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}