#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    set<int>d;
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        d.insert(tmp);
    }
    int ans = d.size();
    cout << ans << endl;
    return 0;
}