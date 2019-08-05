#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n;
    cin >> n;
    vector<int>p;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        p.push_back(tmp);
    }
    sort(p.rbegin(),p.rend());
    // for(int i=0;i<n;i++){
    //     cout << p[i] << ' ';
    // }
    // cout << endl;
    int sum = accumulate(p.begin(),p.end(),0);

    sum -= p[0]/2;
    cout << sum << endl;
    return 0;
}