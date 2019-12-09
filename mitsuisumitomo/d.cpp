#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int n; cin >> n;
    string s; cin >> s;

    vector<int>right(n,0);
    vector<vector<int>>exist(n,vector<int>(10,0));
    right[n-1] = 1;
    exist[n-1][s[n-1]-'0'] = true;


    for(int i=n-2;0<=i;i--){
        if(exist[i+1][s[i]-'0']==true){
            right[i] = right[i+1];
            copy(exist[i+1].begin(),exist[i+1].end(),exist[i].begin());
        }else{
            right[i] = right[i+1] + 1;
            copy(exist[i+1].begin(),exist[i+1].end(),exist[i].begin());
            exist[i][s[i]-'0'] = 1;
        }
    }

    vector<vector<int>>flag(10,vector<int>(10,0));
    vector<int>complete(10,0);

    int ans = 0;
    for(int i=0;i<n-2;i++){
        if(complete[s[i]-'0']==1) continue;
        for(int j=i+1;j<n-1;j++){
            if(flag[s[i]-'0'][s[j]-'0']==0){
                flag[s[i]-'0'][s[j]-'0'] = 1;
                ans += accumulate(exist[j+1].begin(),exist[j+1].end(),(int)0);
                if(accumulate(flag[s[i]-'0'].begin(),flag[s[i]-'0'].end(),(int)0)==10) complete[s[i]-'0']=1;
                // cout << i << ' ' << j << ' ' << ans << ' ' << endl;
            }
        }
    }
    cout << ans << endl;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<10;j++){
    //         cout << exist[i][j] << ' ';
    //     }cout << endl;
    // }

    // for(int i=0;i<s.length();i++){
    //     for(int j=i+1;j<s.length();j++){
    //         if 
    //     }
    // }
    return 0;
}