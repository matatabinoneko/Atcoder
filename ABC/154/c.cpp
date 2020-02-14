#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<bool>flag(1e9+2,false);

signed main(void){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a; cin >>a;
        if(flag[a]==false){
            flag[a] = true;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}