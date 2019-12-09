#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    vector<int>num(int(pow(10,6)),0);
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        num[tmp]++,num[tmp+1]++;
        if(0<=tmp-1) num[tmp-1]++;
    }

    cout << *max_element(num.begin(),num.end()) << endl;
    return 0;
}