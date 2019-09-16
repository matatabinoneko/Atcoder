#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n; cin >> n;
    vector<ll> h(n);
    for(int i=0;i<n;i++) cin >> h[i];
    // for(int i=0;i<n+1;i++) cout <<  h[i];
    ll cnt=0,ans=0;
    for(int i=0;i<n;i++){
        if(i!=n-1 && h[i]>=h[i+1]){
            cnt++;
        }
        else{
            if(ans < cnt){
                ans = cnt;
            }
            cnt=0;
        }    
    }
    cout << ans << endl;
    return 0;
}
