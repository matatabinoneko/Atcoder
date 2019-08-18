#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b,c; cin >> a >> b >> c;
    ll cnt=0;
    if(a%2==b%2 && b%2!= c%2) c--,cnt++;
    else if(b%2==c%2 && c%2!= a%2) a--,cnt++;
    else if(c%2==a%2 && a%2!= b%2) b--,cnt++;

    int max_abc = max(a,max(b,c));
    cout << cnt+(max_abc-a)/2+(max_abc-b)/2+(max_abc-c)/2 << endl;

    return 0;
}