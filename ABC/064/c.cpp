#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = int(pow(10,9))+7;



int main(void){
    int n; cin >> n;

    vector<ll>color(8,0);
    ll rest = 0;
    for(int i=0;i<n;i++){
        ll tmp; cin >> tmp;
        if(tmp<400) color[0]=1;
        else if(tmp<800) color[1]=1;
        else if(tmp<1200) color[2]=1;
        else if(tmp<1600) color[3]=1;
        else if(tmp<2000) color[4]=1;
        else if(tmp<2400) color[5]=1;
        else if(tmp<2800) color[6]=1;
        else if(tmp<3200) color[7]=1;
        else rest++;
    }
    ll ans1 = accumulate(color.begin(),color.end(),0);
    ll ans2 = min(8,int(ans1+rest));
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}