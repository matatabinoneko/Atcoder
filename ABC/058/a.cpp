#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int n;
    int size=0;
    for(int i=0;i<n;i++){
        if(0 < n/(10*i))size++;
        else break;
    }
    
    int k;
    cin >> n >> k;
    vector<int>d(k);
    for(int i=0;((i>>size)&1)<)
    // for(int i=0;i<k;i++)cin >> d[i];
    // sort(d.begin(),d.end());
    // // for(int i=0;i<k;i++){
    // //     cout << d[i] << ' ';
    // // }cout << endl;

    // int ans = 0;
    // for(int i=n[0]-'0';i<10;i++){
    //     if(find(d.begin(),d.end(),i) != d.end()){
    //         ans = i;
    //         break;
    //     }
    // }
    // for(int i=0;i<n.length();i++){
    //     if(find(d.begin(),d.end(),i)!= d.end()){
    //         ans += ans*(n.length()-1) + i*(n.length()-2);
    //     }
    // }
    // cout << ans << endl;
    // return 0;
}