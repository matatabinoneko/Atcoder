#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define m int(pow(10,9)+7)

int main(void){
    int n,k; cin >> n >> k;
    int tenti=0,cnt=1;
    vector<int>a(n);
    vector<int>a_cnt(2001,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a_cnt[a[i]+1]++;
    } 
    for(int i=1;i<=2000;i++){
        a_cnt[i] = max(a_cnt[i],a_cnt[i-1]*a_cnt[i]);
    }

    // for(int i=0;i<a_cnt.size();i++){
    //     cout << a_cnt[i] << ' ';
    // }
    // cout << endl;

    int sum_a_cnt = accumulate(a_cnt.begin(),a_cnt.end(),0) - *max_element(a_cnt.begin(),a_cnt.end()); 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]) tenti++;
        }
    }
    // cout << sum_a_cnt%m << endl;
    cout << ((tenti*k)%m + (((k*(k-1)%m)*sum_a_cnt)%m/2)%m)%m << endl;
    return 0;
}