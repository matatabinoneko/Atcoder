#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,9)

int main(void){
    ll n; cin >> n;
    vector<ll>tmp(n);
    for(int i=0;i<n;i++) cin >> tmp[i];
    ll max_a = *max_element(tmp.begin(),tmp.end());
    vector<ll>a(max_a+1,0);
    for(int i=0;i<n;i++){
        a[tmp[i]]++;
    }
    bool flag = true;
    if(n%2==0){
        for(int i=0;i<a.size();i+=2){
            if(a[i]!=0){
                flag = false;
                break;
            }
        }
        for(int i=1;i<a.size();i+=2){
            if(a[i]!=2){
                flag = false;
                break;
            }
        }  
        if(flag == true){
            ll ans = 1;
            for(int i=0;i<n/2;i++){
                ans = (ans*2)%1000000007;
            }
            cout << ans << endl;
            return 0;  
        }
    }else{
        if(a[0]==1){
            for(int i=1;i<a.size();i+=2){
                if(a[i]!=0){
                    flag = false;
                    break;
                }
            }
            for(int i=2;i<a.size();i+=2){
                if(a[i]!=2){
                    flag = false;
                    break;
                }
            }  
            if(flag == true){
                ll ans = 1;
                for(int i=0;i<n/2;i++){
                    ans = (ans*2)%1000000007;
                }
                cout << ans << endl;
                return 0; 
            }
        }
    }
    cout << 0 << endl;
    return 0;
}