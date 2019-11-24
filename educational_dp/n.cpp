#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n; 

int main(void){
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll index = 0,ans = 0;
    while(a.size()!=1){
        ll sum_a = pow(10,15);
        for(int i=0;i<a.size()-1;i++){
            if(a[i]+a[i+1] < sum_a) sum_a = a[i]+a[i+1], index = i;
        }
        a.erase(a.begin()+index);
        a[index] = sum_a;
        ans += sum_a;

        // for(int i=0;i<a.size();i++){
        //     cout << a[i] << ' ';
        // }cout << endl;
    }
    cout << ans << endl;
    return 0;
}