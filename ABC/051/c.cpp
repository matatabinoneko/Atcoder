#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int sx,sy,tx,ty; cin >> sx >> sy >> tx >> ty;
    string u(ty-sy,'U'),r(tx-sx,'R'),d(ty-sy,'D'),l(tx-sx,'L');
    string s = u+r+d+l+'L'+u+'U'+r+"RDR"+d+'D'+l+"LU";
    cout << s << endl;
    return 0;
}