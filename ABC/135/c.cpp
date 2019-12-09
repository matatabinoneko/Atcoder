#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll>a(n+1),b(n);
    for(int i=0;i<n+1;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ll ans = 0;
    for(int i=n-1;0<=i;i--){
        if(a[i+1] <= b[i]){
            b[i] -= a[i+1];
            ans += a[i+1];
            a[i+1] = 0;
            if(a[i] <= b[i]){
                ans += a[i];
                a[i] = 0;
            }else{
                a[i] -= b[i];
                ans += b[i];
            }
        }else{
            a[i+1] -= b[i];
            ans += b[i];
        }
        
    //     for(int j=0;j<n+1;j++){
    //         cout << a[j] << ' ';
    //     }
    //     cout << endl << endl;
    //     for(int j=0;j<n;j++){
    //         cout << b[j] << ' ';
    //     }
    //     cout << endl;
    }
    cout << ans << endl;
    return 0;
    
}