#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
    cout << a[0] - a[a.size()-1] << endl;
    return 0;
}