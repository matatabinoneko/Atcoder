#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    string s; cin >> s;
    string onkai = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
    // for(int i=0;i<10;i++){
    //     cout << onkai.substr(i,20) << endl;
    // }
    if(s==onkai.substr(0,20)){
        cout << "Do" << endl;
    }else if(s==onkai.substr(2,20)){
        cout << "Re" << endl;
    }else if(s==onkai.substr(4,20)){
        cout << "Mi" << endl;
    }else if(s==onkai.substr(5,20)){
        cout << "Fa" << endl;
     }else if(s==onkai.substr(7,20)){
        cout << "So" << endl;
    }else if(s==onkai.substr(9,20)){
        cout << "La" << endl;
    }else if(s==onkai.substr(11,20)){
        cout << "Si" << endl;
    }else{
        cout << "error" << endl;
    }
    return 0;
}