#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    ll f[n][10], p[n][11];
    for(int i=0;i<n;i++) for(int j=0;j<10;j++) cin >> f[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<11;j++) cin >> p[i][j];
    ll ans=-1*pow(10,10);
    for(int i=1;i<(1<<10);i++){
        ll tmp=0;
        for(int j=0;j<n;j++){
            ll cnt=0;
            for(int k=0;k<10;k++) if((i>>k&1)==1 && f[j][k]==1) cnt++;
            tmp += p[j][cnt];
        }
        if(ans<tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}
