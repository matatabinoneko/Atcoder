#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,m,c;
    cin >> n >> m>> c;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int a;

    int cnt = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            cin >> a;
            sum += a*b[j];
        }
        if(sum + c > 0){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}