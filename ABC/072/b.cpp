#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s; cin >> s;
    for(int i=0;i<s.length();i+=2){
        cout << s[i];
    }
    cout << endl;
    return 0;
}