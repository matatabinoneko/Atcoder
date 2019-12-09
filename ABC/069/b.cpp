#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s; cin >> s;
    int num = s.length()-2;
    cout << s[0] << num << s[s.length()-1] << endl;
    return 0;
}