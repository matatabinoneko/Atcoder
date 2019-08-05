#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    vector<int>a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.rbegin(),a.rend());
    int k;
    cin >> k;
    a[0] = a[0] * pow(2,k);
    cout<< accumulate(a.begin(),a.end(),0)<<endl;;
    return 0;
}