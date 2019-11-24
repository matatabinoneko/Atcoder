#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>l(n);
    for(int i=0;i<n;i++) cin >> l[i];
    sort(l.begin(),l.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int a=l[i],b=l[j];
            auto front = l.begin();
            front += j + 1;
            auto end = lower_bound(l.begin(),l.end(),b+a);
            // cout << end - l.begin() - 1 << ' ' << front - l.begin() << endl;
            // cout << distance(front,end) << endl;
            ans += distance(front,end);
        }
    }
    cout << ans << endl;
    return 0;
}
