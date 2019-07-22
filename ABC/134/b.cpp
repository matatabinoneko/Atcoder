#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n,d;
    cin >> n >> d;
    int a = 2*d + 1;
    cout << ceil(double(n)/a)<<endl;
    return 0;
}