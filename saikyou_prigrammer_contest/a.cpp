#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll m,d; cin >> m >> d;
    ll cnt=0;
    for(int i=1;i<=d;i++){
        ll a=i%10,b=i/10;
        if(a>=2 && b>=2 && a*b<=m) cnt++;
    }
    cout << cnt << endl;
    return 0;
}