#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<int>x(n),y;
    for(int i=0;i<n;i++) cin >> x[i];
    y = x; sort(y.begin(),y.end());
    int l=y[n/2-1],r=y[n/2];
    for(int i=0;i<n;i++){
        if(x[i]<=l) cout << r << endl;
        else cout << l << endl;
    }

    return 0;
}