#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;n++;
    vector<ll>L(n);
    L[0]=2,L[1]=1;
    for(int i=2;i<n;i++) L[i]=L[i-1]+L[i-2];
    cout << L[n-1] << endl;
    return 0;
}