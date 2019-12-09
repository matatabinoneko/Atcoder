#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    int n; cin >> n;
    vector<int>a(n+2);
    for(int i=0;i<n+2;i++){
        a[i] = 0;
    }
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i=1;i<=n+1;i++){
        sum += abs(a[i-1]-a[i]);
    }
    for(int i=1;i<=n;i++){
        int r = max(a[i+1],a[i-1]),l = min(a[i+1],a[i-1]);
        if(l <= a[i] && a[i] <= r) cout << sum << endl;
        else cout << sum - 2*min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1])) << endl;
    }

    return 0;
}