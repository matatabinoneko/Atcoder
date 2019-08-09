#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,m;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    cin >> m;
    vector<string>t(m);
    for(int i=0;i<m;i++){
        cin >> t[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int tmp = count(s.begin(),s.end(),s[i]) - count(t.begin(),t.end(),s[i]);
        if(ans < tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}