#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n; n--;
    vector<ll>B(n);
    for(int i=0;i<n;i++) cin >> B[i];
    B.push_back(B[B.size()-1]);
    // for(int i=0;i<B.size();i++) cout << B[i] << ' ';
    ll ans = B[0],tmp=B[0];
    for(int i=0;i<B.size()-1;i++){
        ans += min(B[i],B[i+1]);
    }
    cout << ans << endl;
    return 0;
}
