#include<bits/stdc++.h>
using namespace std;
#define ll long long

double expect_value(int n, int k){
    if(k == 1) return 0;
    double ret = expect_value(n,k-1) + (double(n)/(n-k+1));
    return ret;
}

int main(void){
    int n;
    cin >> n;
    printf("%.10f",expect_value(n,n));
    return 0;
}