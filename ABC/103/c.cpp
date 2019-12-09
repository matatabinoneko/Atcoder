#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]--;
    }
    cout << accumulate(a.begin(),a.end(),0) << endl;
    return 0;
}