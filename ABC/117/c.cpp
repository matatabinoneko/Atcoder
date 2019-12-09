#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n,m;
    cin >> n>> m;
    if(m<=n){
        cout << 0 << endl;
    }else{
        vector<ll>X(m);
        for(int i=0;i<m;i++){
            cin >> X[i];
        }
        sort(X.begin(),X.end());
        ll max = X[m-1]-X[0]+1-n;
        vector<ll>Y(m-1);
        for(int i=0;i<m-1;i++){
            Y[i] = X[i+1]-X[i]-1;
        }
        sort(Y.rbegin(),Y.rend());
        // for(int i=0;i<m-1;i++){
        //     cout << Y[i]<<' ';
        // }
        // cout << endl;
        ll space = accumulate(Y.begin(),Y.begin()+n-1,0);
        // cout << max <<' '<< space << ' '<< endl;
        cout << max - space << endl;
        return 0;
    }
}