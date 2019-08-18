#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,ans; cin >> n;
    for(int i=0;i<n;i++){
        ll tmp = pow(i,2);
        if(n < tmp) break;
        else ans = tmp;
    } 
    cout << ans << endl;
    return 0;
}

// int main(void){
//     int n; cin >> n;
//     int i= pow(n,0.5);
//     while(n<pow(i,2))i--;
//     printf("%d\n",int(pow(i,2)));
//     return 0;
// }