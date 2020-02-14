#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int d,g; cin >> d >> g;
    vector<vector<int>> pc(d,vector<int>(2,0));
    ll ans = pow(10,9);
    for(int i=0;i<d;i++){
        cin >> pc[i][0] >> pc[i][1];
    }

    for(int i=0;i<(1<<d);i++){
        // cout << (i>0) <<endl;
        ll cnt=0, goal=g;
        for(int j=0;j<d;j++){
            if((i>>j&1)==1){
                cnt+=pc[j][0]; goal -= 100*(j+1)*pc[j][0]+pc[j][1]; 
            }
        }

        // cout << goal << ' ' <<cnt << endl;

        bool flag = false, ok = false;
        if(goal<=0)ok=true;
        for(int j=d-1;0<=j;j--){
            if((i>>j&1)==0){
                flag=true;
                for(int k=0;k<pc[j][0]-1;k++){
                    if (0<goal){
                        goal -= 100*(j+1);
                        cnt++;
                        // cout << goal << ' ';
                    }else{
                        break;
                    }
                    if (goal<=0)ok=true;
                }
                // if(pc[j][0]*100*(j+1)<goal) break;
                // else{
                //     cnt += max(0,int((goal+(100*(j+1))-1)/(100*(j+1))));
                //     // cout << cnt << endl;
                //     if(cnt < ans) ans = cnt;
                // }
            }
            if(flag == true)break;
        }
        // cout << cnt << ' ' << ok << endl;
        if(ok==true && cnt<ans)ans=cnt;
    }
    cout << ans << endl;
    return 0;
}