#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,t; cin >> n >> t;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<ll>left(n,0);
    left[0] = a[0];
    for(int i=1;i<n;i++){
        left[i] = min(left[i-1],a[i]);
    }
    vector<ll>value(n);
    for(int i=0;i<n;i++) value[i] = a[i] - left[i];
    ll cnt = count(value.begin(),value.end(),*max_element(value.begin(),value.end()));
    cout << cnt << endl;
    return 0;
}