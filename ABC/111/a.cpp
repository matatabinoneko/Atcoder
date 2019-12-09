#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(void){
    int n;
    cin >> n;
    int a = 10 - n%10;
    int b = 10 - (n/10) % 10;
    int c = 10 - (n/100)% 10;
    cout << 100*c + 10 * b + a<< endl;
    return 0;
}