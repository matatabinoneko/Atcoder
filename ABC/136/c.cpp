#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    bool flag = true;
    for(int i=1;i<n;i++){
        if(h[i-1] <=h[i]-1){
            h[i]--;
            continue;
        }
        if(h[i-1] <= h[i]){
            continue;
        }
        flag = false;
    }

    // for(int i=0;i<n;i++){
    //     cout << h[i] << ' ';
    // }

    if(flag == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No"<<endl;
    }
    return 0;
}