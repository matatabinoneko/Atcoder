#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int n; cin >> n;
    double sum=0;
    for(int i=0;i<n;i++){
        double tmp; cin >> tmp;
        sum += 1/tmp;
    }
    printf("%.7f\n",1/sum);
    return 0;
}
