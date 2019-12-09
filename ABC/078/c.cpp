#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,m; cin >> n >> m;
    int cnt = pow(2,m);
    ll time = 100*(n-m) + 1900*(m);
    time *= cnt;
    cout << time << endl;
    
    return 0;
}