#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll>h(n);
    ll ans;
    cin >> h[0];
    ans = h[0];
    for(int i=1;i<n;i++){
        cin >> h[i];
        if(h[i-1]<h[i]){
            ans += (h[i]-h[i-1]);
        }
    }
    cout << ans << endl;

}