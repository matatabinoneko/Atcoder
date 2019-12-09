#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,vector<ll>>P;

bool have_been[1005][1005][1005] = {};

int main(void){
    int x,y,z,cnt; cin >> x >> y >> z >> cnt;
    vector<ll>a(x),b(y),c(z);
    for(int i=0;i<x;i++) cin >> a[i];
    for(int i=0;i<y;i++) cin >> b[i];
    for(int i=0;i<z;i++) cin >> c[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
  
    priority_queue<P>q;
    
    // for(int i=0;i<x;i++)for(int j=0;j<y;j++)for(int k=0;k<z;k++)have_been[i][j][k]=false;
    q.push(P{a[0]+b[0]+c[0],{0,0,0}});
    for(int _=0;_<cnt;_++){
        P tmp = q.top();q.pop();
        ll ans = tmp.first;
        cout << ans << endl;
        ll i=tmp.second[0],j=tmp.second[1],k = tmp.second[2];
        if(i+1<x && have_been[i+1][j][k]==false) q.push(P{a[i+1]+b[j]+c[k],{i+1,j,k}}), have_been[i+1][j][k]=true;
        if(j+1<y && have_been[i][j+1][k]==false) q.push(P{a[i]+b[j+1]+c[k],{i,j+1,k}}),have_been[i][j+1][k]=true;
        if(k+1<z && have_been[i][j][k+1]==false) q.push(P{a[i]+b[j]+c[k+1],{i,j,k+1}}), have_been[i][j][k+1]=true;
    }
    return 0;
}