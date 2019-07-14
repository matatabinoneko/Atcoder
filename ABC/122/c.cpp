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
    int n,q;
    cin >> n>> q;
    string s;
    cin >> s;
    vector<int>l(q+1,0);
    vector<int>r(q+1,0);
    l[0]=0;
    r[q]=0;
    for(int i=2;i<=s.length();i++){
        if(s.substr(i-2,2)=="AC"){
            l[i] = l[i-1]+1;
        }else{
            l[i] = l[i-1];
        }
    }
    for(int i=s.length()-1;i>=0;i--){
        if(s.substr(i,2)=="AC"){
            r[i] = r[i+1]+1;
        }else{
            r[i] = r[i+1];
        }
    }

    // for(int i=0;i<sizeof(r);i++){
    //     cout << r[i] << ' ';
    // }

    for(int i=0;i<q;i++){
        int a,b;
        cin >> a>>b;
        // for(int j=a-1;j<b;j++){
        //     cout << s[j];
        // }
        // cout << endl;
        ll ans = r[a-1]-r[b];
        if(b!=n and s.substr(b-1,2)=="AC"){
            ans -= 1;
        }
        cout << ans << endl;
    }
}