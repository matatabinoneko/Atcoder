#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,m;cin >>n >> m;
    priority_queue<ll>q;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        q.push(tmp);
    }
    for(int i=0;i<m;i++){
        ll tmp = q.top();q.pop();
        tmp = tmp/2;
        q.push(tmp);
    }
    
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll tmp = q.top();q.pop();
        ans +=  tmp;
    }
    cout << ans << endl;
    return 0;
}