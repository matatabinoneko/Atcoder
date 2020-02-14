#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;

signed main(void){
    int n; cin >> n;
    vector<P>a(n);
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        a[i] = P{tmp,i+1};
    }
    sort(a.rbegin(),a.rend());

    for(int i =0;i<n;i++){
        cout << a[i].second << endl;
    }

    return 0;
}