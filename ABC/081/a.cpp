#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,k; cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) cnt++;
    }
    cnt -= k;
    int ans = 0;
    int i=0
    while(0<cnt){
        ans++;
        if(a[i]!=a[i+1]) cnt--;
    }
    cout << ans << endl;
    return 0;
}