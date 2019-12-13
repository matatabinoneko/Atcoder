// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define max_a 1000000

// vector<ll> cnt(max_a,0);

// int main(void){
//     int n,k; cin >> n >> k;
//     for(int i=0;i<n;i++){
//         ll a,b; cin >> a >> b;
//         cnt[a] += b;
//     }
//     for(int i=1;i<=max_a;i++){
//         if(0<k) k -= cnt[i];
//         if(k<=0){
//             cout << i << endl;
//             break;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int >P;

signed main(void){
    int n,k; cin >> n >> k;
    vector<P>p;
    for(int i=0;i<n;i++){
        int a,b; cin >> a >> b;
        p.push_back(P{a,b});
    }
    sort(p.begin(),p.end());
    for(int i=0;i<p.size();i++){
        k -= p[i].second;
        if(k<=0){
            cout << p[i].first << endl;
            break;
        } 
    }
    return 0;
}

