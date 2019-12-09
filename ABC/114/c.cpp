#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
vector<ll>v;

bool count(ll num){
    ll tmp = num * 10;
    ll a;
    bool three=false,five=false,seven=false;
    for(int i=1;i<=log10(num)+1;i++){
        tmp = tmp/10;
        a = tmp % 10;
        // cout << a << endl;
        if(a == 3){
            three = true;
        }else if(a == 5){
            five = true;
        }else if(a == 7){
            seven = true;
        }
    }
    // cout << num << ' '<< (three and five and seven) << endl;
    return (three and five and seven);
}

void sft(ll num, ll i){
    if (num <= n){
        // cout << num << endl;
        v.push_back(num);
        sft(num + 3 * pow(10,i),i+1);
        sft(num + 5 * pow(10,i),i+1);
        sft(num + 7 * pow(10,i),i+1);
    }
}
 
int main(void){
    cin >> n;
    sft(0,0);

    ll cnt=0;
    for(ll i=0;i<v.size();i++){
        if(count(v[i])){
            cnt++;
        }
    }

    // for(ll i=0;i<sizeof(v);i++){
    //     cout << v[i] << endl;
    // }

    cout << cnt << endl;
    return 0;
}