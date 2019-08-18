#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n; cin >> n;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        while(tmp%2==0) ans++,tmp/=2;
    }
    cout << ans << endl;
    return 0;
}