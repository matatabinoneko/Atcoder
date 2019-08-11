#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int>P;

int main(void){
    int n,m; cin >> n >> m;
    priority_queue<int> q;
    vector<P>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());

    // for(int i=0;i<n;i++){
    //     cout << v[i].second << endl;
    // }

    int j=0;
    ll ans=0;
    for(int i=1;i<=m;i++){
        while(v[j].first==i){
            q.push(v[j++].second);
        }
        if(q.size()!=0) ans += q.top(),q.pop();
    }
    cout << ans << endl;
    return 0;
}
