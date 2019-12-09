#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll>children(n);
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='R'){
            cnt++;
            if(s[i+1]=='L'){
                cnt--;
                children[i]+=cnt/2 + 1;
                children[i+1] += (cnt+1)/2; 
                cnt = 0;
            }
        }
    }
    cnt = 0;
    for(int i=n-1;0<i;i--){
        if(s[i]=='L'){
            cnt++;
            if(s[i-1]=='R'){
                cnt--;
                children[i]+=cnt/2 + 1;
                children[i-1] += (cnt+1)/2; 
                cnt = 0;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << children[i];
        if(i!=n-1){
            cout << ' ';
        }
    }
    cout << endl;
    
    return 0;
}