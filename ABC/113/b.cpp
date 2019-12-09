#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n;
    cin >> n;
    int t,a;
    cin >> t >> a;
    double tmp = 1000000;
    int ans = 1;
    for(int i=0;i<n;i++){
        int h;
        cin >> h;
        double temperature = abs(a - (t - 0.006 * h));
        if(temperature < tmp){
            tmp = temperature;
            ans = i+1;
        }
    }
    cout << ans << endl;
    
    return 0;
}