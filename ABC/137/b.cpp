#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int k ,x; cin >> k >> x;
    for(int i=max(-1000000,x-k+1);i<=min(1000000,x+k-1);i++){
        cout << i;
        if(i!=min(1000000,x+k-1)) cout <<' ';
    }
    cout << endl;
    return 0;
}
