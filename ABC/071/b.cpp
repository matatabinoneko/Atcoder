#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s; cin >> s;
    vector<bool>exist('z',false);
    for(int i=0;i<s.length();i++){
        exist[s[i]] = true;
    }
    for(int i='a';i<='z';i++){
        if(exist[i]==false){
            cout << char(i) << endl;
            return 0;
        } 
    }
    cout << "None" << endl;
    return 0;
}