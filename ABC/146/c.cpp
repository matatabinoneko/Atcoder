#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int a,b,x; cin >> a >> b >> x;
    
    int high=1e9,low=0;
    int i= low + (high-low)/2;
    // cout << to_string(i).length() << endl;
    while(1 < high-low){
        // cout << high-low << endl;
        if(x<a*i+b*to_string(i).length()) high = i;
        else low = i;
        i=low + (high-low)/2;
        // cout << i << endl;
        // cout << low <<  ' ' << high << endl;
    }
    // cout << high << ' ' << low << endl;
    if (a*high+b*to_string(high).length() <= x) cout << high << endl;
    else cout << low << endl;
    // cout << i << endl;
    return 0;
}

// int keta(int a){
//     int i=1;
//     while(10 <= a){
//         a /= 10;
//         i++;
//     }
//     return i;
// }

// signed main(void){
//     int a,b,x; cin >> a >> b >> x;
//     int n= 0;
//     for(int i=1;i<=10;i++){
//         int tmp = (x - b*i)/a;//買える最大値
//         if (tmp <= 0)continue;
//         if (i < keta(tmp))tmp = min(1e9,pow(10,i)-1);
//         else if (keta(tmp) < i)continue;
//         if (keta(tmp) == i && n < tmp){
//             n = tmp;
//         }
//     }
//     cout << n << endl;
//     return 0;
// }   