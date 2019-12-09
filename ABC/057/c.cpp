#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max_num 1000000000000000

int main(void){
    ll n; cin >> n;
    vector<ll>p_num;
    for(int i=1;i<=(ll)pow(n,0.5);i++){
        if(n%i==0) p_num.push_back(i);
    }
    ll ans = max_num;
    for(int i=0;i<p_num.size();i++){
        ll tmp = max(log10(p_num[i])+1,log10(n/p_num[i])+1);
        if(tmp < ans) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}