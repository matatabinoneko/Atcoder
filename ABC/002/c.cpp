#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    vector<int>x(3),y(3);
    for(int i=0;i<3;i++){
        cin >> x[i] >> y[i];
    }
    printf("%.5f\n",abs(((x[2]-x[0])*(y[1]-y[0]) - (y[2]-y[0])*(x[1]-x[0]))/double(2)));
    // cout << abs(((x[2]-x[0])*(y[1]-y[0]) - (y[2]-y[0])*(x[1]-x[0]))/double(2)) << endl;
    return 0;

}