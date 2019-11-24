#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<pair<int,int>,int> P;
#define INF 1e10

signed main(void){
    int h,w; cin >>h >> w;
    vector<string>maze(h+2);
    vector<vector<int>> count(h+2,vector<int>(w+2,INF));
    queue<P> q;
    string wall(w+2,'*');
    maze[0] = wall,maze[h+1] = wall;
    for(int i=1;i<h+1;i++){
        string s; cin >> s;
        s = '*' + s + '*';
        maze[i] = s;
    }
    for(int i=0;i<maze.size();i++){
        for(int j=0;j<maze[i].size();j++){
            if(maze[i][j] == 's'){
                maze[i].replace(j,1,".");
                count[i][j]=0;
                q.push(P{{i,j},0});
            }
        }
    }


    // for(int i=0;i<maze.size();i++){
    //     for(int j=0;j<maze[i].size();j++){
    //         cout << maze[i][j];
    //     }cout << endl;
    // }cout << endl;


    while(q.size()!=0){
        P tmp = q.front(); q.pop();
        int x = tmp.first.first, y = tmp.first.second, cost = tmp.second;

        // if (count[x][y] < cost || 2 < cost){
        //     continue;
        // }
        vector<int>dx={0,1,0,-1},dy={-1,0,1,0};
        for(int i=0;i<4;i++){
            int next_x = x+dx[i], next_y = y+dy[i];
            if(maze[next_x][next_y]=='*') continue;
            else if(cost <=2 && maze[next_x][next_y]=='.' && cost < count[next_x][next_y])count[next_x][next_y]=cost,q.push(P{{next_x,next_y},cost});
            else if(cost <= 2 && maze[next_x][next_y]=='#' && cost+1 < count[next_x][next_y]) count[next_x][next_y]=cost+1, q.push(P{{next_x,next_y},cost+1});
            else if(cost <= 2 && maze[next_x][next_y]=='g'){
                cout << "YES" << endl;
                return 0;
            }
        }

        // for(int i=0;i<maze.size();i++){
        //     for(int j=0;j<maze[i].size();j++){
        //         cout << count[i][j];
        //     }cout << endl;
        // }cout << endl;
    }

    cout << "NO" << endl;
    return 0;
}