#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int s;
    cin >> s;
    int cnt=1;
    while(s != 4 && s != 2 && s != 1){
        // cout << s << ' ';
        if(s%2 == 0){
            s = s / 2;
        }else{
            s = (3*s+1);
        }
        cnt++;
    }
    // cout << endl;
    cout << cnt + 3<< endl;
    return 0;
}