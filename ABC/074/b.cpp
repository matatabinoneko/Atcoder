#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,k; cin >> n >> k;
    int ans = 0;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        int b = k-a;
        if(a < b) ans += a;
        else ans += b;
    }
    cout << ans * 2 << endl;
    return 0;
}