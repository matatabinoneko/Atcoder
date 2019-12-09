#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n,m,x;
    cin >>n >> m >>x;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    // sort(a.begin(),a.end());
    int l=0,r=0;
    for(int i=0;i<m;i++){
        if(a[i] < x) l++;
        else r++;
    }
    int ans = min(l,r);
    cout << ans << endl;
    return 0;
}