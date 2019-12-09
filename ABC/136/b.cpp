#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n;  
    cin >> n;
    int keta=0;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int keta=1,tmp=i;
        while(1){
            tmp = tmp/10;
            if(tmp==0){
                break;
            }
            keta++;
        }
        if(keta%2 == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}