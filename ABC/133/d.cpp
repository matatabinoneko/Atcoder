#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int sum_a = accumulate(a.begin(),a.end(),(int)0);
    vector<int>r(n,0),l(n,0);
    for(int i=2;i<n;i++){
        r[i] += r[i-2] + a[i-2];
    }

    l[n-2] = a[n-1];
    for(int i=n-3;0<=i;i--){
        l[i] += l[i+2] + a[i+1];
    }

    // for(int i=0;i<n;i++){
    //     cout << r[i] << ' ';
    // }cout << endl;
    // for(int i=0;i<n;i++){
    //     cout << l[i] << ' ';
    // }cout << endl;

    for(int i=0;i<n;i++){
        cout << sum_a - 2*(r[i]+l[i]);
        if(i!=n-1)cout << ' ';
    }cout << endl;
    return 0;
}

