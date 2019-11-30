#include<bits/stdc++.h>
using namespace std;
#define int long long

int keta(int a){
    int i=1;
    while(10 <= a){
        a /= 10;
        i++;
    }
    return i;
}

signed main(void){
    int a,b,x; cin >> a >> b >> x;
    int n= 0;
    for(int i=1;i<=10;i++){
        int tmp = (x - b*i)/a;//買える最大値
        if (tmp <= 0)continue;
        if (i < keta(tmp))tmp = min(1e9,pow(10,i)-1);
        else if (keta(tmp) < i)continue;
        if (keta(tmp) == i && n < tmp){
            n = tmp;
        }
    }
    cout << n << endl;
    return 0;
}   