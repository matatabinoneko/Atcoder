#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max_n 200001

int main(void){
    ll n,k; cin >> n >> k;
    vector<ll>num(max_n,0);
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        num[tmp]++;
    }
    sort(num.rbegin(),num.rend());
    cout << n-accumulate(num.begin(),num.begin()+k,0) << endl;
    return 0;
}