#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = int(pow(10,9))+7;



int main(void){
    ll n,m; cin >> n >> m;
    if(n < m){
        ll tmp = n;n = m;m = tmp;
    }

    if(1 < n-m){
        cout << 0 << endl;
        return 0;
    }else{
        ll tmp=1;
        for(int i=1;i<=n;i++){
            tmp = (tmp*i)%MOD;
        }
        for(int i=1;i<=m;i++){
            tmp = (tmp*i)%MOD;
        }
        if(n-m == 0){
            tmp = (tmp*2)%MOD;
        }
        cout << tmp << endl;
    } 
    return 0;
}