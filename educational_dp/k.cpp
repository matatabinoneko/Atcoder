#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,10)
#define M 1000000007

vector<ll>memo(100005,-1);
ll n,k;
vector<ll>a(105);

ll beatable(ll k){
    if(memo[k]!=-1) return memo[k];
    bool win = false;
    for(int i=0;i<n;i++){
        if(k < a[i]){
            break;
        }
        if(beatable(k-a[i])==0){
            win = true;
            break;
        }
    }
    if(win == true){
        memo[k]=1;
    }else{
        memo[k]=0;
    }
    return memo[k];
}

int main(void){
    cin >> n >> k;
    for(int i=0;i<n;i++)cin >> a[i];

    for(int i=0;i<n;i++)memo[a[i]] = 1;
    
    if(beatable(k)==1) cout << "First" << endl;
    else cout << "Second" << endl;

    // for(int i=0;i<=k;i++){
    //     cout << memo[i] << ' ';
    // }cout << endl;
    return 0;
}