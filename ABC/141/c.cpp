#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n, k, q; cin >> n >> k >> q;
    vector<ll>cnt(n,0);
    for(int i=0;i<q;i++){
        int a; cin >> a; a--;
        cnt[a]++;
    }
    for(int i=0;i<n;i++){
        if(0<k-(q-cnt[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}