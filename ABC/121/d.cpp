#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll a,b; cin >> a >> b;
    bool head=false,back=false;
    ll ans;
    if(a%2==1){
        head = true;
        a++;
    }
    if((b-a+1)%2==1){
        back = true;
    }
    if(((b-a+1)/2)%2==1){
        ans = 1;
    }else{
        ans = 0;
    }

    if(head==true) ans = ans^(a-1);
    if(back==true) ans = ans^b;
    cout << ans << endl;
    return 0;
}