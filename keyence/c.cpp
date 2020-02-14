#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n,k,s; cin >> n >> k >>s;
    int cons;
    if(s<1e8) cons=s+1;
    else cons=s-1;
    for(int i=0;i<k;i++){
        cout << s;
        if(i!=k-1){
            cout << ' ';
        }
    }
    for(int i=0;i<n-k;i++){
        if(i==0){
            cout << ' ';
        }
        cout << cons;
        if(i!=n-k-1){
            cout << ' ';
        }
    }
    cout << endl;
    return 0;
}