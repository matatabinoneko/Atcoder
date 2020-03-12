#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int a,b,c; cin >> a >> b >> c;
    if((a==b && b==c) || (a!=b && b != c && c != a)){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}