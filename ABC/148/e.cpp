// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main(void){
//     int n; cin >> n;
//     if(n%2!=0){
//         cout << 0 << endl;
//         return 0;
//     }

//     int p = 1;
//     int ans = 0;
//     while(pow(5,p)*2<=n){
//         cout << pow(5,p)*2 << ' ';
//         ans += n/(pow(5,p)*2);
//         cout << ans << endl;
//         p++;
//     }


//     cout << ans << endl;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n; cin >> n;
    if(n%2!=0){
        cout << 0 << endl;
        return 0;
    }

    int p = 1;
    int ans = 0;
    n = n/10;
    while(0<n){
        ans += n;
        cout << ans << endl;
        n/=5;
    }


    cout << ans << endl;
    return 0;
}