#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n ; cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    double ave=v[0];
    for(int i=0;i<n;i++){
        ave = (ave+double(v[i]))/2;
    }
    cout << ave << endl;
    return 0;
}
