#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n; cin >> n;
    vector<bool>exist(n);
    for(int i=0;i<n;i++) exist[i]=false;
    ll day=0;
    vector<deque<ll>> a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            ll tmp;
            cin >> tmp;
            tmp--;
            a[i].push_back(tmp);
        }
    }

    while(true){

        bool empty = true;
        for(int i=0;i<n;i++){
            if(a[i].size() != 0){
                exist[i]=false;
                empty = false;
            }
        }
        if(empty==true) break;
        
        for(int i=0;i<n;i++){
            if(a[i].size()!=0){
                ll tmp = a[i][0];
                if(exist[tmp] == false && exist[i] == false && a[tmp][0] == i){
                    exist[tmp] = true;
                    a[tmp].pop_front();
                    exist[i] = true;
                    a[i].pop_front();
                }
            }
        }

        bool flag = false;
        for(int i=0;i<n;i++){
            if(exist[i]==true) flag = true;
        }
        if(flag == false) {
            cout << -1 << endl;
            return 0;
        }
        day++;
    }
    cout << day << endl;
	return 0;
}
