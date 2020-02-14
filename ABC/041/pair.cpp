#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int n; cin >> n;
    vector<vector<int>>a(n,vector<int>(2));
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        a[i] = {tmp,i};
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout << a[i][1] << endl;
    }
    return 0;
}