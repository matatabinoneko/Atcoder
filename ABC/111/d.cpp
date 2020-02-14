#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<int>x(n),y(n);
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    int check = 0;
    for(int i=0;i<n;i++){
        if((abs(x[i])+abs(x[0])+abs(y[i])+abs(y[0]))%2!=0){
            cout << -1 << endl;
            return 0;
        }
    }
    
    
    return 0;
}