#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>flag(1e5+3,false);

signed main(void){
    int n; cin >> n;
    int cnt=0;

    for(int i=0;i<n;i++){
        int a; cin >> a;
        if (flag[a] == false){
            flag[a] = true;
        }else{
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}