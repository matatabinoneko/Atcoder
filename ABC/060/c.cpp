#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,t; cin >> n >> t;
    ll x, finish_time; cin >> finish_time;
    x = t; finish_time += t;
    for(int i=1;i<n;i++){
        ll tmp; cin >> tmp;

        if(finish_time <= tmp){
            x += t;
            finish_time = tmp + t;
        }else{
            ll add_time = max((ll)0,(t - (finish_time - tmp)));
            x += add_time;
            finish_time += add_time;
        }

    }
    cout << x << endl;
    return 0;
}