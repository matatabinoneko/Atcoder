#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    ll neg_cnt = 0;
    vector<ll> a;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        if(tmp < 0) neg_cnt++;
        a.push_back(abs(tmp));
    }
    sort(a.begin(),a.end());

    ll ans = accumulate(a.begin(),a.end(),(ll)0);
    if(int(neg_cnt)%2!=0) ans -= 2*a[0];
    cout << ans << endl;
    return 0;
}