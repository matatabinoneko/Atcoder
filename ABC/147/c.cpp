#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        int cnt; cin >> cnt;
        for(int j=0;j<cnt;j++){
            int x,y; cin >> x >> y;x--;
            a[i][x] = y;
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << a[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    int ans = 0;
    for(int i=0;i<(1<<n);i++){
        bool br = false;
        vector<int>flag(n,-1);
        int tmp=0;
        for(int j=0;j<n;j++){
            if(((i>>j)&1)==1){
                tmp++;
                flag[j]=1;
            }
        }

        // for(int j=0;j<n;j++){
        //     cout << flag[j] << ' ';
        // }cout << endl;

        for(int j=0;j<n;j++){
            if(flag[j]==1){
                // cout << j <<"->"<< (i>>0) <<endl;
                for(int k=0;k<n;k++){
                    if((a[j][k] ==1 && flag[k]!=1)||(a[j][k]==0 && flag[k]==1)){
                        // cout << i << ' ' << j <<' ' <<  k <<' ' << a[j][k] << ' ' << flag[k] << endl;
                        br = true;
                        break;
                    }else if(a[j][k]==-1){
                        continue;
                    }else{
                        flag[k]=a[j][k];
                    }
                }
            }
            if(br==true)break;
        }
        if(br==false && ans < tmp)ans = tmp;
    }
    cout << ans << endl;
    return 0;
}