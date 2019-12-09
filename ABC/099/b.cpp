#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int a,b;
    cin >> a >> b;
    int tmp = b-a;
    int ans=0;
    for(int i=1;i<=tmp;i++){
        ans += i;
    }
    cout << ans - b << endl;
    return 0;
}