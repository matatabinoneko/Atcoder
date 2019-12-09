#include<bits/stdc++.h>
using namespace std;

#define ll long long

 
int main(void){
    vector<ll>v(3);
    cin >> v[0]>>v[1]>>v[2];
    sort(v.rbegin(),v.rend());
    cout << 10*v[0] + v[1] + v[2]<<endl;

    return 0;
}