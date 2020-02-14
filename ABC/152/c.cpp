#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>>uesita(10,vector<int>(10,0));

signed main(void){
    int n; cin >> n;
    int ans = 0;
    for(int i=1;i<=n;i++){
        string s = to_string(i);
        int ue = s[0]-'0', sita = s[s.length()-1] - '0';
        // cout << ue << ' ' << sita << endl;

        uesita[ue][sita]++;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            // cout <<i << ' ' << j << ' ' <<  uesita[i][j] << endl;
            ans += uesita[i][j]*uesita[j][i];
        }
    }
    cout << ans << endl;
}