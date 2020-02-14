#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    int a,b; cin >> a >> b;
    if(a < b){
        string tmp = "";
        for(int i=0;i<b;i++) tmp += to_string(a);
        cout << tmp << endl;
    }else{
        string tmp = "";
        for(int i=0;i<a;i++) tmp += to_string(b);
        cout << tmp << endl;
    }
    return 0;
}