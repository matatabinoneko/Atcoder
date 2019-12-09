#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n;
    cin >> n;
    double sum;
    for(int i=0;i<n;i++){
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY"){
            sum += x;
        }else{
            sum += x * 380000;
        }
    }
    printf("%.7f\n",sum);
    return 0;
}