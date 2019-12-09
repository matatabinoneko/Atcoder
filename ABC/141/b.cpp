#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s; cin >> s;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            if(s[i]!='R' and s[i]!='U' and s[i]!='D'){
                cout << "No" << endl;
                return 0;
            } 
        }else{
            if(s[i]!= 'L' and s[i]!='U' and s[i]!='D'){
                cout << "No" << endl;
                return 0;
            } 
        }
    }
    cout << "Yes" << endl;
    return 0;
}