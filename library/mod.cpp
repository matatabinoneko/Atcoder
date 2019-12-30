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