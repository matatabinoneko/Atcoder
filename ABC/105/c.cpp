#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    if (n == 0){
        cout << 0 << endl;
        return 0;
    } 
    vector<char>s;
    while(n != 1){
        ll div = ceil(double(n)/(-2));
        ll mod = n - div * (-2);
        // cout << div << ' ' << mod << endl;
        if(mod == 0) s.push_back('0');
        else s.push_back('1');
        n = div;
    }
    s.push_back('1');
    for(int i=s.size()-1;0<=i;i--){
        cout << s[i];
    }
    cout << endl;
    return 0;
}