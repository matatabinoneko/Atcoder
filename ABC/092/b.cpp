#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,d,x; cin >> n >> d >> x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt = x;
    for(int i=0;i<n;i++){
        int day = 1;
        while(day<=d){
            cnt++;
            day += a[i]; 
        }
    }
    cout << cnt << endl;
    return 0;
}