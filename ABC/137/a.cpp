#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b; cin >> a >> b;
    cout << max(a+b,max(a-b,a*b)) << endl;
    return 0;
}   