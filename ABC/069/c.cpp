#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll four=0,odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%4==0 ) four++;
        if(a[i]%2==1) odd++;
    }
    if(odd<=four || (1 <= four && a.size()<=3)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}