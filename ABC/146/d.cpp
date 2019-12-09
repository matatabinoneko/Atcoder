#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<vector<int>>inp(n-1,vector<int>(2));
    for(int i=0;i<n-1;i++) cin >> inp[i][0] >> inp[i][1],inp[i][0]--,inp[i][1]--;
    vector<vector<int>>G(n);
    for(int i=0;i<inp.size();i++){
        G[inp[i][0]].push_back(inp[i][1]);
        // G[inp[1]].push_back(inp[0]);
    }
    vector<int>from_col(n,-1);

    for(int i=0;i<G.size();i++){
        int col = 0;
        for(int j=0;j<G[i].size();j++){
            if (col == from_col[i]){
                col++;
            }
            from_col[G[i][j]] = col++;
        }
    }

    cout << *max_element(from_col.begin(),from_col.end())+1 << endl;
    for(int i=0;i<inp.size();i++){
        cout << from_col[inp[i][1]]+1 << endl;
    }
    return 0;
}