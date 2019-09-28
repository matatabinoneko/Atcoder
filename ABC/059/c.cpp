#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<ll>a(n);
    cin >> a[0];
    for(int i=1;i<n;i++){
        cin >> a[i];
        a[i] += a[i-1];
    }

    // for(int i=0;i<n;i++) cout << a[i] << ' ';
    // cout << endl;

    ll move=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        ll new_move;
        ll tmp = a[i] + move;
        if(i%2==0){
            new_move = max((ll)0,1-tmp);
            cnt1 += abs(new_move);
            move += new_move;
        }else{
            new_move = -1*max((ll)0,1+tmp);
            cnt1 += abs(new_move);
            move += new_move;
        }
        // cout << cnt1 << ' ';
    }
    move = 0;
    for(int i=0;i<n;i++){
        ll new_move;
        ll tmp = a[i] + move;
        if(i%2==0){
            new_move = -1*max((ll)0,1+tmp);
            cnt2 += abs(new_move);
            move += new_move;
        }else{
            new_move = max((ll)0,1-tmp);
            cnt2 += abs(new_move);
            move += new_move;
        }
        // cout << cnt2 <<' ';
    }
    // cout << cnt1 <<' ' << cnt2 <<  endl;
    cout << min(cnt1,cnt2) << endl;
    return 0;
}