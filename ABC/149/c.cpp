#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(void){
    int x; cin >> x;
    vector<int>sosuu;
    for(int i=2;i<1e5+4;i++){
        bool flag = true;
        for(int j=0;j<sosuu.size();j++){
            if (i%sosuu[j]==0){
                flag = false;
                break;
            }
        }
        if (flag == true){
            sosuu.push_back(i);
        }
    }
    for(int i=0;i<sosuu.size();i++){
        if (x <= sosuu[i]){
            cout << sosuu[i] << endl;
            break;
        }
    }
    return 0;
}