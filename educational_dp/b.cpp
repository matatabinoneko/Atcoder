#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)

int main(void){
    ll n,k; cin >> n >> k;
    vector<ll>h(n);
    for(int i=0;i<n;i++) cin >> h[i];
    vector<ll>cost(n,INF);
    cost[0]=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i+j<n){
                cost[i+j] = min(cost[i+j],cost[i]+abs(h[i+j]-h[i]));
            }
        }
    }
    cout << cost[n-1] << endl;
    return 0;
}