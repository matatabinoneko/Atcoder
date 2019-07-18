#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll>L(n);
    for(int i=0;i<n;i++){
        cin >> L[i];
    }
    ll sum_L = accumulate(L.begin(),L.end(),0);
    // cout << sum_L<<endl; 
    bool flag = true;
    for(int i=0;i<n;i++){
        ll tmp = sum_L - L[i];
        // cout << "L[i]" << tmp<<endl;
        if(tmp <= L[i]){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes"<<endl;
    }else{
        cout << "No"<<endl;
    }
    return 0;
}