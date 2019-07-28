#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    int n;
    cin >> n;
    vector<ll>a(n+1);
    vector<ll>num_cnt(int(pow(10,5+1)),0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    for(int i=1;i<=n;i++){
        num_cnt[a[i]] += min(i,n-i+1) + min(i-1,n-i);
    }
    ll cnt = accumulate(num_cnt.begin(),num_cnt.end(),0);
    cnt = (cnt+1)/2;
    ll ans = 0;

    for(int i=0;i<40;i++){
        cout << num_cnt[i] << ' ';
    }
    cout << endl;

    for(ll i=1;i<=num_cnt.size();i++){
        ans += num_cnt[i];
        if(cnt <= ans){
            cout << i << endl;
            break;
        }
    }
    return 0;
}