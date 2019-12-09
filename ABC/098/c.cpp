#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    vector<int>l(n),r(n);
    l[0]=0;r[n-1]=0;
    for(int i=1;i<n;i++) l[i]=l[i-1]+(s[i-1]=='W');
    for(int i=n-2;0<=i;i--) r[i] = r[i+1] + (s[i+1]=='E');
    ll ans = n*2;
    for(int i=0;i<n;i++) if(r[i]+l[i] < ans) ans = r[i]+l[i];
    cout << ans << endl;

    return 0;
}