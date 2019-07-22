#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n;
    cin >> n;
    int t,a;
    cin >> t >> a;
    int tmp = 1000000;
    int ans;
    for(int i=0;i<n;i++){
        int h;
        cin >> h;
        if(abs(a- (t - 0.006 * h)) < tmp){
            tmp = abs(a- (t - 0.006 * h));
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}