#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,m; cin >> n >> m;
    vector<ll>tc(n,0),value(n);
    vector<vector<ll>>key(m,vector<ll>(n,0));
    for(int i=0;i<n;i++){
        ll a,b; cin >> a >>b;
        value[i]=a;
        for(int j=0;j<b;j++){
            ll tmp; cin >> tmp;tmp--; 
            key[i][tmp]++;
            tc[tmp]++;
        }
    }
    ll sum_value = accumulate(valuse.begin(),value.end(),(ll)0);
    for(int i=0;i<n;i++){
        vector<ll>rest(n);
        ll rest_value = sum_value;
        for(int j=0;j<m;j++){
            bool zero = false;
            for(int k=0;k<n;k++){
                if(tc[k] - key[i][k] <= 0) zero = true;
            }
            if(zero == false){
                if(sum_value-value[i] < rest_value) rest_value = sum_value-value[i];
            }
        }
    }
    return 0;
}
