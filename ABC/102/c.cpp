#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i] -= i;
        // cout << a[i] << ' ';
    }
    sort(a.begin(),a.end());
    ll decrease;
    if(n%2==0) decrease = (a[n/2] + a[n/2-1])/2;
    else decrease = a[n/2];

    ll ans=0;
    for(int i=0;i<n;i++){
        ans += abs(a[i]-decrease);
    }
    cout << ans << endl;
    return 0;
}