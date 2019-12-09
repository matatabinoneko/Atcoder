#include <iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include <numeric>
#include<cmath>
#include<string>
using namespace std;
#define ll long long

ll n,m;

int main(void){
    cin >>n>>m;
    bool flag = false;
    for(int sen=0;sen<=n;sen++){
        ll foot = m - sen*3;
        ll num = n-sen;
        if(foot<0 || num < 0) continue;
        if(foot%2==0 && ceil(double(foot)/4) <= num && num <=floor(double(foot)/2)){
            ll bab = foot/2-num;
            ll adu = num - bab;
            cout << adu<<' '<< sen << ' ' << bab<<endl;
            flag = true;
            break;
        }
    }
    if(!(flag)){
        cout << -1 <<' '<< -1 <<' '<< -1<<endl;
    }
}