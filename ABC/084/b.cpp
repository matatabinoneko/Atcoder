#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b; cin>>a >> b;
    string s; cin >> s;
    bool flag = true;
    if(s[a]!='-') flag = false;
    for(int i=0;i<a;i++){
        if(s[i]<'0' || '9'<s[i]) flag = false; 
    }
    for(int i=a+1;i<a+b;i++){
        if(s[i]<'0' || '9'<s[i]) flag = false; 
    }
    if(flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}