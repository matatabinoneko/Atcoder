#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n,k; cin >> n >> k;

    vector<double>kitai(n,0);
    for(int i=0;i<n;i++){
        int p; cin >>p;
        kitai[i] = p*(p+1)/double(2*p);
        // cout << kitai[i] << ' ';
    }
    // cout << endl;
    double ans = 0;
    // for(int i=0;i<n-k+1;i++){
    //     double tmp=0;
    //     for(int j=0;j<k;j++){
    //         tmp += kitai[i+j];
    //         // cout << tmp << ' ';
    //     }
    //     // cout << endl;
    //     if( ans < tmp)ans = tmp;
    //     // cout << ans << endl;
    // }
    for(int i=0;i<k;i++){
        ans += kitai[i];
    }
    double tmp = ans;
    for(int i=0;i<n-k;i++){
        tmp = tmp - kitai[i] + kitai[k+i];
        if(ans < tmp )ans = tmp;
    }
    printf("%.10f\n",ans);
    return 0;
}