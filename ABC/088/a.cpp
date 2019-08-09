#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    int n,a;    cin >> n >> a;
    if(n%500 <= a){
        cout << "Yes"<< endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}