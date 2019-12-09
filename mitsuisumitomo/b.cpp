#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int tmp = (int)i*1.08;
        if(tmp == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":("<< endl;
    return 0;
}