#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=pow(10,9)+7;

class Combination{
public:
    vector<int>fac;
    vector<int>finv;
    vector<int>inv;

    Combination(int MAX,int mod=MOD){
        fac.resize(MAX+2);
        finv.resize(MAX+2);
        inv.resize(MAX+2);
        fac[0] = fac[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for (int i = 2; i < MAX; i++){
            fac[i] = fac[i - 1] * i % MOD;
            inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
            finv[i] = finv[i - 1] * inv[i] % MOD;
        }
    }

    int com(int n, int k){
        if (n < k) return 0;
        if (n < 0 || k < 0) return 0;
        return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
    }
};

signed main(void){
    // Your code here!
    cout << to_string(10000) << endl;
    Combination c(1e7);
    cout << c.com(10,3) << endl;
    
}

