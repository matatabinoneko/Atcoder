#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int h,w; cin >> h >> w;
    vector<vector<int>> mass(h,vector<int>(w));
    vector<vector<int>> ans;

    for(int i=0;i<h;i++)for(int j=0;j<w;j++) cin >> mass[i][j];
    
    for(int i=0;i<h;i++){
        if(i%2==0){
            for(int j=0;j<w;j++){
                if(mass[i][j]%2==1){
                    int n_x=i,n_y=j;
                    if(j+1<w){
                        n_y++;
                    }else{
                        n_x++;
                    }
                    if(n_x<h){
                        mass[n_x][n_y]++;
                        ans.push_back({i+1,j+1,n_x+1,n_y+1});
                        // cout << i << ' ' << j << ' ' << n_x << ' ' << n_y << endl;
                    }
                }
            }
        }else{
            for(int j=w-1;0<=j;j--){
                if(mass[i][j]%2==1){
                    int n_x=i,n_y=j;
                    if(0<=j-1){
                        n_y = j-1;
                    }else{
                        n_x = i+1;
                    }
                    if(n_x<h){
                        mass[n_x][n_y]++;
                        ans.push_back({i+1,j+1,n_x+1,n_y+1});
                        // cout << i << ' ' << j << ' ' << n_x << ' ' << n_y << endl;
                    }
                }
            }
        }
    }

    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i][0] << ' ' << ans[i][1] << ' ' << ans[i][2] << ' ' << ans[i][3] << endl;
    }
    return 0;
}