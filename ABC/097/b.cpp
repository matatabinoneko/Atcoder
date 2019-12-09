#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int x;
    cin >> x;
    int ans=0;
    for(int i=1;i<=x+1;i++){
        for(int j=2;j<=x+2;j++){
            int p = pow(i,j);
            // cout << p << endl;
            if(x < p) break;
            if(ans < p) ans = p;
        }
        // if(pow(i,2)>x){
        //     cout << pow(i-1,2) <<endl;
        //     return 0;
        // }
    }
    cout << ans << endl;
    return 0;
}