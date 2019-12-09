#include<bits/stdc++.h>
using namespace std;

#define ll long long

int word(string s,string t){
    // cout << s<<' ' << t << endl;
    vector<int>exist('z'+1);
    for(int i=0;i<exist.size();i++){
        exist[i] = 0;
    }
    int cnt=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]) {
                exist[s[i]] = 1;
                break;
            }
        }
    }
    int ans = accumulate(exist.begin(),exist.end(),0);
    // cout << ans <<' '<<endl;
    return ans;
}

int main(void){
    int n;
    cin >> n;
    string s;
    cin >>s;
    int len = s.length();
    int ans = 0;
    for(int i=1;i<s.length();i++){
        string a = s.substr(0,i);
        string b = s.substr(i,len-i);
        int tmp = word(a,b);
        if (ans < tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}