#include <iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cmath>
using namespace std;

int main(void){
    int n,k;
    cin >>n>>k;
    int number[k];
    
    for(int i=0;i<k;i++){
        number[i]=0;
    }
    
    int i=k,cnt=0;
    int last=n+1;
    double ans=0;
    while(1){
        if(last-i<0){
            i = ceil(double(i)/2);
            cnt++;
            // cout <<i<<endl;
            continue;
        }else{
            ans+= 1/double(n) * double(last-i) * pow(0.5,cnt);
            cnt++;
            // cout <<"ans;"<<ans<<endl;
        }
        if(i==1){
            // ans+= 1/double(n) * double(last-i) * pow(0.5,cnt);
            break;
        }
        last = i;
        i = ceil(double(i)/2);
        // cout <<i<<endl;
    }
    std::cout << std::fixed;
    printf("%.15f",ans);
}
