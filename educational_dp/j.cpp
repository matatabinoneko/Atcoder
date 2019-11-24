#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)
#define M 1000000007
ll n;
vector<vector<vector<double>>> memo(305,vector<vector<double>>(305,vector<double>(305,-1)));

double sushi(ll x, ll y, ll z){
    if(memo[x][y][z]!=-1)return memo[x][y][z];
    double a=0,b=0,c=0;
    if(0<x) a = sushi(x-1,y+1,z) * (double)x/(x+y+z);
    if(0<y) b = sushi(x,y-1,z+1) * (double)y/(x+y+z);
    if(0<z) c = sushi(x,y,z-1) * (double)z/(x+y+z);
    memo[x][y][z] = a+b+c + (double)n/(x+y+z);
    return memo[x][y][z];
}

int main(void){
    cin >> n;
    vector<ll>cnt(4,0);
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        cnt[tmp]++;
    }
    memo[0][0][1]=n;
    printf("%.10f\n",sushi(cnt[3],cnt[2],cnt[1]));
    // return 0;

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         for(int k=0;k<3;k++){
    //             cout << memo[i][j][k] << ' ';
    //         }cout << endl;
    //     }cout << endl;
    // }cout << endl;
}