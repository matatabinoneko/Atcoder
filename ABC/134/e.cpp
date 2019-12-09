#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF pow(10,9)

vector<ll>col;

void search(ll A){
    ll i = col.size()/2;
    ll di = i;
    while(1){
        if(col[i+1] < A <= col[i]){
            col[i+1] = A;
            break;
        }else if(di==0){
            col.push_back(A);
            break;
        }
        if(col[i] <= A){
            i = i + (di/2);
        }else{
            i = i - (di/2);
        }
        di = di/2;
    }
}

int main(void){
    int n;
    cin >> n;
    vector<ll>A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    col.push_back(INF);
    col.push_back(A[0]);
    for(int i=1;i<n;i++){
        search(A[i]);
        for(int j=1;j<col.size();j++){
            cout << col[j] << ' ';
        }
    }

    return 0;
}