#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    n %= 6*5;
    int tmp = n/5;
    n = n - tmp*5;

    for(int i=0;i<5;i++){
        if (n==i) cout << tmp+1;
        cout << (tmp+1+i)%6+1;
    }cout << endl;
    return 0;
}


