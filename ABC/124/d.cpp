#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int front=0,end=0;
    while(s[front]=='1' && front < n){
        front++;
    }
    front--;
    while(0<k && front < n){
        k--;front++;
        while(s[front]=='0' && front < n){
            front++;
        }
        while(s[front]=='1' && front < n){
            front++;
        }
        front--;
    }
    // cout << end << ' ' << front << endl;

    ll ans = front - end + 1;
    while(front<n-1){
        front++;
        while(front < n && s[front]=='0'){
            front++;
        }
        while(s[front]=='1' && front < n){
            front++;
        }
        front--;
        while(s[end]=='1' && end < n){
            end++;
        }
        while(s[end]=='0' && end < n){
            end++;
        }
        // cout << end << ' ' << front << endl;
        ll tmp = front - end + 1;
        if(ans < tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}