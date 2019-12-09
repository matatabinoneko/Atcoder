#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    int x,y; cin >> x >> y;
    int one=-1,two=-1;
    // i:x軸上での１移動の数
    for(int i=0;i<x;i++){
        if((x-i)%2==0){
            if(i*2+((x-i)==y){
                one = i;
                two = (x-i)/2;
                break;
            }
        }else{
            continue;
        }
    }
    
    // cout << one << ' ' << two << endl;
    return 0;
}