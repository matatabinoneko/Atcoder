#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll>box(n+1);
    vector<ll>ans(n+1);
    for(int i=1;i<=n;i++){
        cin >> box[i];
    }

    for(int i=n;1<=i;i--){
        ll sum = 0, k = 1,j = i;
        while(j*k<=n){
            sum += ans[j*k];
            k++;
        }
        if(sum%2 != box[i]){
            ans[i] = 1;
        }else{
            ans[i] = 0;
        }
    }

    // for(int j=1;j<=n;j++){
    //     cout << ans[j] <<' ';
    // }
    // cout << endl;

    ll cnt = accumulate(ans.begin(),ans.end(),0);
    cout << cnt << endl;
    bool flag = false;
    for(int i=1;i<=n;i++){
        if(ans[i]==1){
            if(flag){
                cout << ' ';
            }
            flag = true;
            cout << i;
        }
    }
    cout << endl;
    return 0;
}