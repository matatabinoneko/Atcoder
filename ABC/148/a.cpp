#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int a,b; cin >> a >> b;
    for (int i=1;i<=3;i++){
        if(i!=a && i !=b){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}