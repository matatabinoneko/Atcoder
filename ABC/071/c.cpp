#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<int>num(n);
    for(int i=0;i<n;i++) cin >> num[i];
    sort(num.rbegin(),num.rend());

    // for(int i=0;i<n;i++) cout << num[i] << ' ';
    // cout << endl;

    ll ans[2],j=0;
    for(int i=0;i<n-1;i++){
        if(num[i]==num[i+1]){
            ans[j++]=num[i++];
        }
        if(j==2){
            cout << ans[0]*ans[1] << endl;
            return 0;
        } 
    }
    cout << 0 << endl;
    return 0;
}