#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include <numeric>
#include<cmath>
#include<string>
using namespace std;
#define ll long long
int n;
int A,B,C;
vector<int> l;

int dfs(int cur,int a,int b,int c){
    if (cur == n){
        return (min(a,min(b,c))>0) ?abs(a-A)+abs(b-B)+abs(c-C)-30 :1000000000;
    }
    int ret1,ret2,ret3,ret4;
    ret1 = dfs(cur+1,a,b,c);
    ret2 = dfs(cur+1,a+l[cur],b,c)+10;
    ret3 = dfs(cur+1,a,b+l[cur],c)+10;
    ret4 = dfs(cur+1,a,b,c+l[cur])+10;
    return min(ret1,min(ret2,min(ret3,ret4)));
}

int main(void){

    cin >> n >> A >> B >> C;

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
    }

    cout << dfs(0,0,0,0) << endl;

}