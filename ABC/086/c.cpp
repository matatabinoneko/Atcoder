#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    int t=0,x=0,y=0;
    for(int i=0;i<n;i++){
        int next_t,next_x,next_y; cin >> next_t >> next_x >> next_y;
        int dt = next_t-t, dx = abs(next_x-x), dy=abs(next_y-y), sum=dx+dy;
        if(sum <= dt && (sum)%2==dt%2){
            x=next_x;y=next_y;t=next_t;
            continue;
        }else{
            cout << "No"<< endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}