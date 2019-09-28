#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(void){
    int x; cin >> x;
    ll cnt=0;
    for(int i=1;i<=x;i++){
        cnt+= i;
        if(x <= cnt){
            cout << i << endl;
            break;
        }
    }
    return 0;
}