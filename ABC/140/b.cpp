#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll>A(n),B(n),C(n-1);
    for (int i=0;i<n;i++) cin >> A[i], A[i]--;
    A.push_back(0);
    for(int i=0;i<n;i++) cin >> B[i];
    for(int i=0;i<n-1;i++) cin >> C[i];
    ll ans =0;
    for(int i=0;i<n;i++){
        ans += B[A[i]];
        if(A[i]+1 == A[i+1]) ans += C[A[i]];
    }
    cout << ans << endl;
    return 0;
}
