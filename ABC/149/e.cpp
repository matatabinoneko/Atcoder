#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int n,m; cin >> n >>m;
    // priority_queue<int>q;
    vector<int>a(n);
    int all = 0;
    for(int i=0;i<n;i++){
        // int tmp; cin >> tmp;
        // q.push(tmp);
        cin >> a[i];
        all += a[i];
    }

    sort(a.rbegin(),a.rend());
    int ans = 0;
    for(int i=0;i<n;i++){
        if(2*(n-i)-1<=m){
            m-=2*(n-i)-1;
            all -= a[i];
            ans += 2*a[i]*(n-i)+2*(all);
            // cout << a[i]*(n-i)+2*(all)<< endl;
        }else{
            int j=i;
            while(0<m and j<n){
                if(i==j){
                    ans += 2*a[i];
                    // cout << 2*a[i] << endl;
                    j++;
                    m--;
                }else{
                    ans += 2*(a[i] + a[j]);
                    // cout << 2*(a[i] + a[j]);
                    m-=2;
                    if (m<0){
                        ans -= (a[i] + a[j]);
                        // cout << -1*(a[i] + a[j-2]);
                        break;
                    }
                    j++;
                    // cout << endl;
                }

            }
            // for(int j=i;j<i+m;j++){
            //     ans += a[i] + a[j];
            //     // cout << a[i] + a[j] << endl;
            // }
            // break;
        }

    }
    cout << ans << endl;
    return 0;
}