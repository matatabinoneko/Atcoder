#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    string s; cin >> s;
    vector<int>cnt(s.length())
    int cnt = 0;
    for(int i=0;i<s.length();i++){
        int n=s[i]-'0';
        if(n<=5) cnt += n;
        else cnt += 10-n + 1;
    }
    cout << cnt << endl;
    return 0;
}