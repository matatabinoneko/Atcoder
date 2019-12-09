#include<bits/stdc++.h>
using namespace std;
#define ll long long

int deposit(int num, int yen){
    int cnt=0,num_max=1;
    while(num_max <= yen) num_max *= num;num_max /= max(1,num);
    while(0<yen){
        cnt++;
        yen -= num_max;
        while(yen != 0 && yen < num_max) num_max = max(1, num_max/num);
    }
    return cnt;
}

int main(void){
    int n, ans=pow(10,9); cin >> n;
    for(int i=0;i<=n;i++){
        int tmp = deposit(6,i) + deposit(9,n-i);
        if(tmp < ans) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}