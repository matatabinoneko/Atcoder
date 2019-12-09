#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<ll>A(n);
    ll first=0,second=0;
    for(int i=0;i<n;i++){
        cin >> A[i];
        if(second <= A[i]){
            if(first <= A[i]){
                second = first;
                first = A[i];
            }else{
                second = A[i];
            }
        }
    }

    for(int i=0;i<n;i++){
        if(A[i]==first){
            cout << second<<endl;
        }else{
            cout << first << endl;
        }
    }
    return 0;
}