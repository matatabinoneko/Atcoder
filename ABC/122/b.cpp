#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b,k;
    cin >> a >> b >> k;
    for(int i=max(a,b);0<=i;i--){
        if(a%i == 0 && b%i == 0){
            k--;
        }
        if(k == 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}