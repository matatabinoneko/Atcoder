#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

#define INF 1e9
vector<int> a(1e5+5,INF), sum_a(1e5+5,0), cnt_list(1e5+5,INF);
 

int n,m;


int main(void){
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    sum_a[n-1] = a[n-1];
    for(int i=n-2;0<=i;i--){
        sum_a[i] = sum_a[i+1] + a[i];
    }

    // for(int i=0;i<n;i++){
    //     cout << a[i] << ' ';
    // }cout << endl;
    // for(int i=0;i<n;i++){
    //     cout << sum_a[i] << ' ';
    // }cout << endl;


    int low = 0,high=2*1e5+4,mid,sum_cnt=INF;
    while(1<high-low){
    // for(int q=0;q<100;q++){
        mid = (low+high)/2;
        sum_cnt = 0;
        for(int i=n-1;0<=i;i--){
            int tmp = mid - a[i];
            auto iter = lower_bound(a.begin(),a.begin()+n,tmp);
            cnt_list[i] = a.begin()+n-iter;
            sum_cnt += cnt_list[i];
            // cout << tmp << ' '<< cnt_list[i] << endl;
        }
        // cout << endl;
        if(m<=sum_cnt) low = mid;
        else high = mid;

    }

    if(high-low==1){       
        mid = low;
        sum_cnt = 0;
        for(int i=n-1;0<=i;i--){
            int tmp = mid - a[i];
            auto iter = lower_bound(a.begin(),a.begin()+n,tmp);
            cnt_list[i] = a.begin()+n-iter;
            sum_cnt += cnt_list[i];
        }
        
    }

    int ans = 0;
    int cnt = 0;
    for(int i=n-1;0<=i;i--){
        for(int j=n-1;n-cnt_list[i]<=j;j--){
            if(cnt!=m)ans += a[i] + a[j],cnt++;
        }
    }
    cout << ans << endl;
    return 0;
}