#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    string s;
    cin >> s;
    int sn = 0;
    for(int i=0;i<s.length();i++){
        sn += s[i]-'0';
    }
    if(stoi(s)%sn==0){
        cout << "Yes" << endl;
     }else{
         cout << "No"<<endl;
     }
     return 0;

}