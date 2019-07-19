#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef pair<ll,ll>P;

int main(void){
    ll n,m;
    cin >> n>>m;
    vector<vector<P>>p(n+1);
    vector<ll>num(m);
    for(ll i=0;i<m;i++){
        cin >> num[i];
        cin >> tmp;
        p[num].push_back(P{tmp,i});
        p[num][i].second = i;
    }
    sort(p[0].begin(),p[0].end());
    

    for(ll i=0;i<p[0].size();i++){
        printf("%06d%06d\n",num[i],p[num[i]][i].second);
    }
    return 0;
}