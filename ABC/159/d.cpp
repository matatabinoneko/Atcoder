#include<bits/stdc++.h>
using namespace std;
#define int long long

class Mod{
public:
    vector<int>fac;
    vector<int>finv;
    vector<int>inv;
    int MOD;

    Mod(int MAX=1e6,int mod=1e9+7){
        MOD = mod;
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

    int add(int a, int b){
        return (a + b)%MOD;
    }
    
    int mul(int a,int b){
        return (a*b)%MOD;
    }
    
    int modinv(int a) {
        int b = MOD, u = 1, v = 0;
        while (b) {
            int t = a / b;
            a -= t * b; swap(a, b);
            u -= t * v; swap(u, v);
        }
        u %= MOD;
        if (u < 0) u += MOD;
        return u;
    }
    
    int div(int a, int b){
        return (a*modinv(b)%MOD);
    }
};


signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    vector<int>cnt(n+3,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    vector<int> size_count(n+3,0);
    for(int i=1;i<cnt.size();i++){
        size_count[cnt[i]]++;
    }
    
    // for(int i=0;i<=n;i++){
    //     cout << cnt[i] << ' ' << size_count[i] << endl;
    // }

    Mod M;
    int all = 0;
    for(int i=1;i<size_count.size();i++){
        all = M.add(all,M.mul(M.com(i,2),size_count[i]));
        // cout << all << endl;
    }



    for(int i=0;i<n;i++){
        // cout << all << ' ' << M.com(cnt[a[i]],2) << ' ' << M.com(max(static_cast<int>(0),cnt[a[i]]-1),2) << endl;
        int ans = all  - M.com(cnt[a[i]],2) +  M.com(max(static_cast<int>(0),cnt[a[i]]-1),2);
        cout << ans << endl;
    }
    return 0;
}