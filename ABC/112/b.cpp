#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    ll N,T;
    ll ans = pow(10,9);
    cin >> N>>T;
    for(ll i=0;i<N;i++){
        ll c,t;
        cin >>c>>t;
        if(t <= T and c < ans){
            ans = c;
        }
    }if(ans == pow(10,9)){
        cout << "TLE"<<endl;
    }else{
        cout << ans << endl;
    }

}