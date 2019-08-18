#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    ll n,k;
    cin >>n >> k;
    ll cntk=0,cntk2=0;
    for(int i=1;i<=n;i++){
        if(i%k==0) cntk++;
    }
    if(k%2==0){
        for(int i=1;i<=n;i++){
            if(i%k==k/2) cntk2++;
        }
    }

    // cout << cntk <<' ' << cntk2 << endl;

    ll ans = pow(cntk,3);
    if(cntk2!=0) ans += pow(cntk2,3);
    
    cout << ans << endl;
       return 0;
}