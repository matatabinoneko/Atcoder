#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef pair<ll,ll>P;

int main(void){
    ll n,m;
    cin >> n>>m;
    vector<vector<P>>p(n+1);
    vector<ll>num(m);
    vector<ll>cnt(n+1);

    for(ll i;i<cnt.size();i++){
        cnt[i] = 0;
    }

    for(ll i=0;i<m;i++){
        ll tmp;
        cin >> num[i];
        cin >> tmp;
        p[num[i]].push_back(P{tmp,i});
    }

    // for(ll i=0;i<=n;i++){
    //     for(ll j=0;j<p[i].size();j++){
    //         cout << p[i][j].first << ' '<< p[i][j].second << endl;
    //     }
    //     cout << endl;
    // }

    for(ll i=0;i<p.size();i++){
        sort(p[i].begin(),p[i].end());
        for(ll j=0;j<p[i].size();j++){
            p[i][j].first = p[i][j].second;
            p[i][j].second = j+1;
        }
        sort(p[i].begin(),p[i].end());        
    }


    // for(ll i=0;i<=n;i++){
    //     for(ll j=0;j<p[i].size();j++){
    //         cout << p[i][j].first << ' '<< p[i][j].second << endl;
    //     }
    //     cout << endl;
    // }
    

    for(ll i=0;i<m;i++){
        printf("%06d%06d\n",num[i],p[num[i]][cnt[num[i]]].second);
        cnt[num[i]]++;
    }
    return 0;
}