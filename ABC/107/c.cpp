#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,15)

int main(void){
    int n,k;
    cin >> n >> k;
    vector<ll>pos;
    vector<ll>neg;
    for(int i=0;i<n;i++){
        ll tmp;
        cin >> tmp;
        if(0 <= tmp){
            pos.push_back(tmp);
        }else{
            neg.push_back(abs(tmp));
        }
    }
    pos.push_back(0);
    neg.push_back(0);    
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());


    ll init = (pos.size() < k+1)?pos.size()-1 :k;
    ll end = k-init;

    ll ans=INF;
    while(end < neg.size() and 0 <= init){
        ll tmp=pos[init] + neg[end] + min(pos[init], neg[end]);
        if(tmp < ans){
            ans = tmp;
        }
        init--;end++;
    }
    cout << ans << endl;

    // for(int i=0;i<pos.size();i++){
    //     cout << pos[i]<<' ';
    // }
    // cout << endl << endl;
    // for(int i=0;i<neg.size();i++){
    //     cout << neg[i]<<' ';
    // }


    return 0;
}