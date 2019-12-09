#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    int ans=pow(10,9);
    for(int i=0;i<n;i++){
        int a; cin >> a;
        int cnt=0;
        while(a%2==0) cnt++,a/=2;
        if (cnt < ans) ans = cnt;
    }
    cout << ans << endl;
    return 0;
}