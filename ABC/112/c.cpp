#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF pow(10,9)+1

ll pyramid[101][101];

int main(void){
    ll N;
    cin >> N;

    for(ll i=0;i<101;i++){
        for(ll j=0;j<101;j++){
            pyramid[i][j]=INF;
        }
    }

    ll x,y,h;
    for(ll i=0;i<N;i++){
        cin >> x>>y>>h;

        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                ll tmp = h+abs(x-i)+abs(y-j);
                if(pyramid[i][j]==INF){
                    pyramid[i][j]= tmp;
                }else if(pyramid[i][j] != tmp){
                    pyramid[i][j] = -1;
                }
            }
        }
    }

    ll ans_h = 0, ans_x, ans_y;

    for(ll i=0;i<101;i++){
        for(ll j=0;j<101;j++){
            cout << pyramid[i][j] << ' ';
            if(ans_h <= pyramid[i][j]){
                ans_h = pyramid[i][j];
                ans_x = i;
                ans_y = j;
            } 
        }
        cout << endl;
    }



    cout << ans_x<< ' '<<ans_y << ' ' <<ans_h << endl;
}