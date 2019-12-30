#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n,a,b; cin >> n >> a >> b;
    if((b-a)%2==0){
        cout << (b-a)/2 << endl;
    }else{
        // cout << min(max(abs(a-1),abs(b-1)),max(abs(n-b),abs(n-a))) << endl;
        cout << min(a-1+1+(b-a-1)/2,n-b+1+(b-a-1)/2) << endl;
    }
    return 0;
}