#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n;
    cin >> n;
    while(0 <= n){
        if(n % 7 == 0){
            cout << "Yes" << endl;
            return 0;
        }
        n -= 4;
    }
    cout << "No" << endl;
    return 0;

}