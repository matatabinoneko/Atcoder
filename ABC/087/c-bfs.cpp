#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<pair<int,int>,int>P;

int ans=0;
int mass[3][102];
int n;  

void bfs(int x,int y,int cnt){
    if(x==2 && y == n && ans < cnt) ans = cnt;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            if(i==0 && j == 0) continue;
            int next_x = x+i, next_y = y+j;
            if(1 <= next_x && next_x <= 2 && 1 <= next_y && next_y <= n){
                bfs(next_x,next_y,cnt + mass[next_x][next_y]);
            }
        }
    }
}

int main(void){
    cin >> n;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            cin >> mass[i][j];
        }
    }
    bfs(1,1,mass[1][1]);

    cout << ans << endl;
    return 0;
}