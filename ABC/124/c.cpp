#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include <numeric>
#include<cmath>
#include<string>
using namespace std;
#define ll long long

int main(void){
    string s;
    cin >> s;
    int num = 0;
    int cnt1=0,cnt2=0;
    string a = "01";

    for(int i=0;i<s.length();i++){
        if(s[i]!=a[num]){
            cnt1 += 1;
        }
        num = (num+1)%2;
    }
    num = 1;
    for(int i=0;i<s.length();i++){
        if(s[i] != a[num]){
            cnt2 += 1;
        }
        num = (num+1)%2;
    }
    // cout << cnt1 << ' '<< cnt2<<endl;
    int ans;
    if(cnt1 < cnt2){
        ans = cnt1;
    } else{
        ans = cnt2;
    }
    cout << ans<< endl;
    return 0;
}
