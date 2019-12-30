#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int a ,b, k; cin >> a >>b >>k;
    if(a < k){
        k -= a;
        a = 0;
    }else{
        a -= k;
        k = 0;
    }

    cout << a << ' ' << max((int)0,b-k) << endl;
    
    return 0;
}