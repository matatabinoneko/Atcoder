#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(void){
    int n;
    cin >> n;
    for(int i=1;i<=9;i++){
        int ans = 111 * i;
        if(n <= ans){
            cout << ans << endl;
            break;
        }
    }
    return 0;
}