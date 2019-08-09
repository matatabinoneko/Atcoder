#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,h; cin >> n >> h;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(b[i] <= a[0] || h <= 0) break;
        h -= b[i];
        cnt++;
    }
    cnt += max(0,int(h+a[0]-1)/a[0]);
    cout << cnt << endl;
    return 0;
}