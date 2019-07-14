#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include <numeric>
#include<cmath>
#include<string>
using namespace std;
#define ll long long
typedef pair<ll,ll>P;

int main(void){
    int n,m;
    cin >> n>>m;
    vector<P>drink(n);
    for(int i=0;i<n;i++){
        cin >> drink[i].first>>drink[i].second;
        // cout << drink[i].first<< ' '<< drink[i].second<<endl;
    }
    sort(drink.begin(),drink.end());

    // for(int i=0;i<n;i++){
    //     cout << drink[i].first<< ' '<< drink[i].second<<endl;
    // }

    int cnt =0;
    ll ans =0;

    for(int i=0;i<n;i++){
        if(drink[i].second+cnt<=m){
            cnt += drink[i].second;
            ans += drink[i].first*drink[i].second;
        }else{
            ans += drink[i].first*(m-cnt);
            break;
        }
    }
    cout << ans << endl;


}