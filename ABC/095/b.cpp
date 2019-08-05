#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n,x;
    cin >> n >> x;
    vector<int>m(n);
    for(int i=0;i<n;i++){
        cin >> m[i];
    }
    sort(m.begin(),m.end());
    int sum = accumulate(m.begin(),m.end(),0);
    x -= sum;
    int cnt=n;
    cnt = cnt + x/m[0];
    cout << cnt << endl;
    return 0;
}