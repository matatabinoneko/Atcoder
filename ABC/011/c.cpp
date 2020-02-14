#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n ;cin >> n;
    vector<int>ng(3);
    for(int i=0;i<3;i++) cin >> ng[i];
    ng.push_back(-1);
    sort(ng.rbegin(),ng.rend());
    int index = 0;
    int cnt = 0;
    while(cnt < 100 && n!=0){
        // cout << cnt << ' ' << n << ' ' << ng[index] <<  endl;
        if(0 <= n-3 &&  (n-3) != ng[index]){
            n -= 3;
        }else if (0 <= n-2 &&(n-2) != ng[index]){
            n -=2;
        }else if (0 <= n-1 &&(n-1) != ng[index]){
            n -= 1;
        }else{
            cout << "NO" << endl;
            return 0;
        }
        cnt++;
        if( n < ng[index]) index++;

    }

    if( n != 0) cout  << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}