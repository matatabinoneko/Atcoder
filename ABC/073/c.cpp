#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<int>num(n);
    for(int i=0;i<n;i++) cin >> num[i];
    sort(num.begin(),num.end());
    num.push_back(0);
    int cnt=0,ans=0;
    for(int i=0;i<n;i++){
        if(num[i]==num[i+1]) cnt++;
        else if(++cnt%2!=0) ans++,cnt=0;
    }
    cout << ans << endl;
}