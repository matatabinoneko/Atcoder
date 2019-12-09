#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,q;
    cin >> n>> q;
    string s;
    cin >> s;
    vector<int>r(n+1,0);
    r[q]=0;

    for(int i=s.length()-2;i>=0;i--){
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