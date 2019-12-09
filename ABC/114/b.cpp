#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#define INF pow(10,9)

int main(void){
    string s;
    cin >> s;
    ll ans = INF;
    for(int i=0;i<s.length()-2;i++){
        ll tmp = abs(753-stoi(s.substr(i,3)));
        if(tmp<ans){
            ans = tmp;
        }
    }cout << ans<<endl;

    return 0;
}