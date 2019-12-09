#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    string s = to_string(n);
    int fn;
    for(int i=0;i<s.length();i++) fn += s[i]-'0';
    if(n%fn==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}