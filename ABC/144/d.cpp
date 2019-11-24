#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(void){
    int a,b,x; cin >> a >> b >> x;
    double p = a;
    double q = 2*double(pow(a,2)*b - x)/(pow(a,2));
    if(x < pow(a,2)*double(b/2)){
        p = 2*x/double(a*b);
        q = b;
    }
    // cout << p << ' ' << q << endl;
    printf("%.10f\n",360 * atan(q/p)/(2*M_PI));
    return 0;
}