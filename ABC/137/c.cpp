#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){ 
    int n; cin >> n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
        // cout << s[i] << endl;
        sort(s[i].begin(),s[i].end());
        // cout << s[i] << endl;
    }
    sort(s.begin(),s.end());

    // for(int i=0;i<n;i++){
    //     cout << s[i] << endl;
    // }

    ll cnt=1,ans=0;
    for(int i=0;i<=n-1;i++){
        if(i!= n-1 && s[i]==s[i+1]){
            cnt++;
        } 
        else{
            ans += cnt*max(1,int(cnt-1))/2;
            cnt=1;
        } 
    }
    cout << ans << endl;
    return 0;
}
