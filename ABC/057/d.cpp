#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,a,b; cin >> n >> a >> b;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    double ave = accumulate(v.begin(),v.begin()+a,0.0)/a;
    ll cnt = count(v.begin(),v.end(),v[0]);
    for(int i=1;i<=a;i++){
        if(v[i]!=v[i-1]){
            cnt *= count(v.begin(),v.end(),v[i]);
        }
    }
    cout << ave << endl << cnt << endl;

    return 0;
}