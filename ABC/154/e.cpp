#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(void){
    string n; cin >>n;
    int K; cin >>K;
    int length = n.length();
    vector<int>f(length,0);
    // for(int i=0;i<length;i++)f[i]=n[i]-'0';
    vector<vector<int>> equal(length,vector<int>(K+1,0))),lessthan(length,vector<int>(K+1,0)));
    
    equal[0][0] = 0;
    lesstham[0][0] = 0;

    for(int i=1;i<length;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<2;k++){
                if(j==0){
                    if(j==f[i]) equal[i][j] += equal[i-1][j];
                    else lessthan[i][j] += lessthan[]
                }else if(j<f[i]){
                    lessthan[i][j+1] += less[i-1][j];
                }else if(j==f[i] && k==1){
                    equal[i][j+1] += equal[i-1][j];

                }

            }
        }
    }
    

    for(int i=1;i<length;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<length;k++){
                for(int l=0;l<(j?9:f[i]);l++){
                    // dp[i][ j||l<f[i] ][ (l!=0)?k+1:k] += dp[i-1][j][k];
                }
            }
        }
    }
    cout << dp[length][0][K] + dp[length][1][K] << endl;
    return 0;
}