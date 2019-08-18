#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n,k; cin >>n >> k;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int cnt = count(a.begin(),a.end(),a[0]);
    cout << (a.size()-cnt+k-2)/(k-1) << endl;
    return 0;
}