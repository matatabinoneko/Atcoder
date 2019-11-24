#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,9)

vector<vector<ll>> d(110,vector<ll>(110,INF));
int N;

void warshall_floyd(){
    for(int i=1;i<=N;i++){
        for(int j=0;j<=N;j++){
            for(int k=1;k<=N;k++){
                d[j][k]=min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }
}

int main(void){
    int M; cin >> N >> M;
    vector<vector<ll>> e(110,vector<ll>(110,INF));
    for(int i=1;i<=N;i++){
        int a,b,c; cin >> a >>b >> c;
        d[a][b] = d[b][a] = c;
        e[a][b] = e[b][a] = c;
    }
    warshall_floyd();
    int ans=0;
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            if(e[i][j]!=INF && d[i][j] < e[i][j]) ans++;
        }
    }
    return 0;
}