#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b,c,d; cin >> a >> b >> c >> d;
    cout << max(0,min(b,d)-max(a,c)) << endl;
    return 0;
}