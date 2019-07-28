#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF pow(10,9)*5
typedef pair<pair<ll,ll>,ll> P;

ll pyramid[101][101];

int main(void){
    ll N;
    cin >> N;

    for(ll i=0;i<101;i++){
        for(ll j=0;j<101;j++){
            pyramid[i][j]=0;
        }
    }
    vector<P>v(N);
    for(int i=0;i<N;i++){
        cin >>v[i].first.second >> v[i].second >>  v[i].first.first;
    }
    sort(v.rbegin(),v.rend());

    ll ans_h, ans_x, ans_y;  
    bool flag;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            flag = true;
            for(int k=0;k<N;k++){
                ll h = v[k].first.first, x = v[k].first.second, y = v[k].second;
                ll tmp = h + abs(x-i) + abs(y-j);
                if(k==0){
                    ans_h = tmp;
                    ans_x = i;
                    ans_y = j;
                }else if(h == 0){
                    if(tmp < ans_h){
                        flag = false;
                        break;
                    }
                }else{
                    if(tmp != ans_h){
                        flag = false;
                        break;
                    }
                }
            }
            if (flag == true){
                cout << ans_x<< ' '<<ans_y << ' ' <<ans_h << endl;
                return 0;
            }
        }
    }
    return 0;
}