#include<bits/stdc++.h>
using namespace std;
#define int long long



// int keta(int n){
//     // cout << n << endl;
//     if(n < 10){
//         if(n==0)return 0;
//         else return 1;
//     }else{
//         int keisuu=0,kurai=1;
//         while(10 <= n/pow(10,kurai-1)){
//             kurai++;
//         }
//         keisuu = n/pow(10,kurai-1);

//         // cout << "kurai:" << kurai << " keisuu:" << keisuu << endl;

//         int next_n = n - keisuu * pow(10,kurai-1);
//         int next_keisuu = next_n/pow(10,kurai-2);

//         // cout << "next_n:" << next_n << " next_keisuu:" << next_keisuu << endl;

//         int ret = keisuu*keta(next_n);
//         if(1 < keisuu) ret += pow(10,kurai-1);
//         else ret += next_keisuu * pow(10,kurai-2);

//         return ret;
//     }
// }

vector<int>keta(10,0);

int hoge(void){
    for(int i=2;i<10;i++){
        if(i==2){
            keta[i] = 1;
        }else{
            keta[i] = keta[i-1] * pow(10,i-2) + pow(10,i-1);
        }
    }
}

signed main(void){
    int n; cin >> n;
    while(10 <= n/pow(10,kurai-1)){
        kurai++;
    }

    hoge(kurai);
    
    for(int i=0;i<10;i++){
        cout << keta[i] << ' ';
    }cout << endl;

    int ans = 0;

    for(int i=0;i<kurai;i++){
        int keisuu = (n/pow(10,i))%10;
        ans += keisuu * keta[i];
    }
    cout << ans << endl;
    return 0;

}