#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main(void){
    int n; cin >> n;
    set<int>s;
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        while(tmp%2==0){
            tmp /=2;
        }
        s.insert(tmp);
    } 
    cout << s.size() << endl;
    // set<int>s;
    // for(int i=0;i<n;i++){
    //     int tmp; cin >> tmp;
    //     s.add(tmp);
    //     s.add(2*tmp);
    // }
    // cout << 
    return 0;
}
