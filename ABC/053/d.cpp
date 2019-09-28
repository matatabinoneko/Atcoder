#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    set<ll> a;
    ll cnt=0;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        if(a.find(tmp)!=a.end()){
            cnt++;
        }else{
            a.insert(tmp);
        }
    }

    cout << a.size() - (cnt%2) << endl;
    return 0;
}