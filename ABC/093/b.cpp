#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b,k;
    set<int>s;
    cin >> a >> b >> k;
    for(int i=a;i<=min(b,a+k-1);i++){
        s.insert(i);
    }
    for(int i=b;max(a,b-k+1)<=i;i--){
        s.insert(i);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout << *it << ' ' << endl;
    }
    return 0;
}