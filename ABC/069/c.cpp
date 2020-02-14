#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int odd=0,four=0;
    for(int i=0;i<n;i++){
        if (a[i] %2 != 0){
            odd++;
        }else if(a[i]%4==0){
            four++;
        }
    }
    if((odd <= four) || (four+1==odd && four+odd==n)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}