#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int k,n; cin >> k >> n;
    vector<int>a(n);
    int first; cin >> first;
    int before = first;
    int tmp; 
    for(int i=0;i<n-1;i++){
        cin >> tmp;
        a.push_back(tmp-before);
        before = tmp;
    }
    a.push_back(k-tmp+first);
    sort(a.begin(),a.end());
    int ans = accumulate(a.begin(),a.end()-1,(int)0);
    cout << ans << endl;
    return 0;
}