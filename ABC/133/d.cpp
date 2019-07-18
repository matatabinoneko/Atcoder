#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll>A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    ll All = accumulate(A.begin(),A.end(),0);
    vector<ll>X(n);
    X[0] = All;
    for(int i=1;i<n;i+=2){
        X[0] -= 2*A[i];
    }
    for(int i=1;i<n;i++){
        X[i] = 2*A[i-1] - X[i-1];
    }

    for(int i=0;i<n;i++){
        cout << X[i];
        if(i!=n-1){
            cout << ' ';
        }
    }
    cout << endl;

}