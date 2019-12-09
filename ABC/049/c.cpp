#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s; cin >> s;
    int i=0;
    while(i<s.size()){
        if(s.substr(i,6)=="eraser") i += 6;
        else if(s.substr(i,5)=="erase") i += 5;
        else if(s.substr(i,7)=="dreamer" && s.substr(i+5,5)!="erase") i += 7;
        else if(s.substr(i,5)=="dream") i += 5;
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}