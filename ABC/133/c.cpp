#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(void){
    ll l,r;
    cin >> l>>r;
    ll ans =pow(10,18)*5;
    // cout << ans<<endl;
    for(int i=l;i<=r;i++){
        for(int j=i+1;j<=r;j++){
            ll tmp = (i*j)%2019;
            if(tmp<ans){
                ans = tmp;
                // cout << i<<"*"<<j<<"="<<ans << endl;
                if(ans == 0){
                    break;
                }
            }
        }
        if(ans==0){
            break;
        }
    }
    cout << ans << endl;
    
}
