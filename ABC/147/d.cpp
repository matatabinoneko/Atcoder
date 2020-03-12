#include<bits/stdc++.h>
using namespace std;
#define int long long

int modpow(int a, int n) {
    int mod = 1e9+7;
    int res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}


signed main(void){
    int MOD = 1000000007;
    int n; cin >> n;
    vector<int>one(100,0),zero(100,0);
    for(int i=0;i<n;i++){
        int a; cin >> a;
        int j=0;
        // cout << "ok" << endl;
        while(0<(a>>j)){
            if(((a>>j)&1)==1){
                one[j]++;
            }else{
                zero[j]++;
            }
            j++;
        }
    }
    int ans = 0;
    for(int i=0;i<100;i++){
        if (one[i]!=0) zero[i] = n - one[i];
        // cout << one[i] << ' ' << zero[i] <<' ' << ans <<  endl;
        ans = (ans + (((one[i]*zero[i])%MOD)*modpow(2,i))%MOD)%MOD;
        // if(ans < 0) cout << ((one[i]*zero[i])%MOD) <<' ' <<  (int)pow(2,i) << ' ' << (((one[i]*zero[i])%MOD)*(int)pow(2,i))%MOD<< endl;
    }
    cout << ans << endl;
    return 0;
}