#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    ll target=a[0],cnt=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=target || i==n-1){
            if(i==n-1) cnt++;
            if(cnt<target) ans += cnt;
            else if(target < cnt) ans += cnt-target;
            cnt=1;target=a[i];
        }else{
            cnt++;
        }
    }
    cout << ans << endl;
    return 0;
}
