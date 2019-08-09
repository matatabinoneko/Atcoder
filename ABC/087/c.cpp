#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<pair<int,int>,int>P;

int main(void){
    int n;  cin >> n;
    int mass[3][n+1];
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            cin >> mass[i][j];
        }
    }

    queue<P>que;
    que.push(P{{1,1},0});
    int ans=0;
    while(que.size()!=0){
        P p = que.front();que.pop();
        // cout << p.first.first <<' '<< p.first.second << ' ' << p.second << endl;;

        int x = p.first.first,y = p.first.second, cnt = p.second + mass[x][y];
        if(x==2 && y == n && ans < cnt){
            ans = cnt;
        }
        for(int i=0;i<=1;i++){
            for(int j=0;j<=1;j++){
                if(i==0&&j==0){
                    continue;
                }
                int next_x = x+i,next_y = y+j;
                if(1<=next_x && next_x<=2 && 1<= next_y && next_y <= n){
                    que.push(P{{next_x,next_y},cnt});
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}