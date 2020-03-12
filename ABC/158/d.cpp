#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    string a; cin >> a;
    
    int n; cin >> n;
    bool reversable = false;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==1){
            reversable = (reversable==false);
            continue;
        }
        int y; cin >>y;
        string c; cin >> c;

        if((reversable==false && y==1) || (reversable==true && y==2)){
            a = c + a;
        }else{
            a = a + c;
        }

    }
    if (reversable==false){
        for(int i=0;i<a.length();i++){
            cout << a[i];
        }
    }else{
        for(int i=a.length()-1;0<=i;i--){
            cout << a[i];
        }
    }cout << endl;
    return 0;
}