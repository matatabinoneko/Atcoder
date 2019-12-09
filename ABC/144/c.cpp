#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int n; cin >> n;
    int tmp;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) tmp = i;
    }
    cout << tmp + n/tmp - 2 << endl;
    return 0;
}