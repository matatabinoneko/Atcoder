#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n; cin >> n;
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            cout << i;
            if(j != n) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}