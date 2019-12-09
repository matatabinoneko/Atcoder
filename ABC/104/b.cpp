#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    string s;
    cin >> s;
    if(s[0]!='A'){
        cout << "WA"<<endl;
        return 0;
    }
    int cnt = count(s.begin()+2,s.end()-1,'C');
    if(cnt != 1){
        cout << "WA"<<endl;
        return 0;        
    }
    cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]<= 'Z' and s[i]>='A'){
            cnt++;            
        }
    }
    // cout << cnt << endl;
    if(cnt != 2){
        cout << "WA"<<endl;
        return 0;
    }
    cout << "AC"<<endl;
    return 0;
}