#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n;
    cin >> n;
    set<char>s;
    for(int i=0;i<n;i++){
        char c; cin >> c;
        s.insert(c);
    }
    int cnt = s.size();
    if(cnt == 3){
        cout << "Three" << endl;
    }else{
        cout << "Four" << endl;
    }
    return 0;
}