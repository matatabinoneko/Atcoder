#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(void){
    ll ans = 0;
    vector<ll> food(5);
    for(int i=0;i<5;i++){
        cin >> food[i];
        ans += ((food[i]+9)/10)*10;
    }



    ll tmp = 9;
    for(int i=0;i<5;i++){
        if((food[i]-1)%10 < tmp){
            tmp = (food[i]-1)%10;
        }
    }

    cout << ans - (10 - tmp - 1) << endl;

}