#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        if(n<pow(2,i)){
            cout << pow(2,i-1) << endl;
            return 0;
        } 
    }
    return 0;
}