#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    set<string>set;
    string s; cin >> s;
    int k; cin >> k;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<=k;j++){
            set.insert(s.substr(i,j));
        }
    }
    auto itr = set.begin();
    for(int i=1;i<k;i++) itr++;
    cout << *itr << endl;
    return 0;
}