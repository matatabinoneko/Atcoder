#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string a,b; cin >> a >> b;
    int c = stoi(a + b);
    for(int i=0;i<c;i++){
        if(pow(i,2)==c){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}