#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int a,b; cin >> a >> b;
    for(int i=1;i<=100;i++){
        // cout << i << ':' << int(i*1.08) << ' ' << int(i*1.1) << endl;
        if(floor(i*0.08)==a && floor(i*0.1)==b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}