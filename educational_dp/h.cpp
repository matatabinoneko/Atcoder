#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)
#define M 1000000007


int main(void){
    ll h,w; cin >> h >> w;
    vector<string> maze;
    string s(w+2,'#');
    maze.push_back(s);
    for(int i=0;i<h;i++){
        string t; cin >> t; t = "#"+t+"#";
        maze.push_back(t);
    }
    maze.push_back(s);

    // for(int i=0;i<maze.size();i++){
    //     for(int j=0;j<maze[i].size();j++){
    //         cout << maze[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    vector<vector<ll>>cnt(h+2,vector<ll>(w+2,0));
    for(int i=1;i<=h;i++)if(maze[1][i]=='.')cnt[1][i]=1; else break;
    for(int i=1;i<=w;i++)if(maze[i][1]=='.')cnt[i][1]=1; else break;

    for(int i=2;i<=h;i++){
        for(int j=2;j<=w;j++){
            if(maze[i][j]=='.'){
                cnt[i][j] = (cnt[i-1][j] + cnt[i][j-1])%M;
            }
        }
    }

    // for(int i=0;i<maze.size();i++){
    //     for(int j=0;j<maze[i].size();j++){
    //         cout << cnt[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    cout << cnt[h][w] << endl;
    return 0;
}