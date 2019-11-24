#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    if(n%2==0) printf("%.10f\n",double(1)/2);
    else printf("%.10f\n",double(n/2+1)/n);
    return 0;
}
