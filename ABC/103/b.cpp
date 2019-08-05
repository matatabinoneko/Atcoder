#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    string s,t;
    cin >> s >> t;
    int end = s.length()-1;
    for(int i=0;i<s.length();i++){
        if(s == t){
            cout << "Yes" << endl;
            return 0;
        }
        char a = s[end];
        for(int j=end;1<=j;j--){
            s[j] = s[j-1];
        }
        s[0] = a;
    }
    cout << "No"<<endl;
    return 0;
}