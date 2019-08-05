#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,m;
    cin >> n >> m;
    int food[m] = {};

    // for(int i=0;i<m;i++){
    //     cout << food[i] << ' ';
    // }
    // cout << endl;

    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int num;
            cin >> num;
            food[num-1]++;
        }
    }
    int cnt = 0;
    for(int i=0;i<m;i++){
        if(food[i]==n){
            cnt++;
        }
    }

    // for(int i=0;i<m;i++){
    //     cout << food[i] << ' ';
    // }
    // cout << endl;

    cout << cnt << endl;
    return 0;
}