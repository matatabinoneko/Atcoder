#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int d,n;
    cin >> d >> n;
    int num = pow(100,d);
    if(n==100) n++;
    cout << num * n<< endl;
    return 0;
}