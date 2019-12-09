#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s;
    ll k;
    cin >> s >> k;
    bool flag = false;
    for(int i=0;i<s.length();i++){
        if(s[i]!='1' && i+1 <= k){
            flag = true;
            cout << s[i] << endl;
            break;
        }
    }
    if(flag == false){
        cout << 1 << endl;
    }
    return 0;
}