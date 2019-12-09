#include<bits/stdc++.h>
using namespace std;

#define ll long long

 
int main(void){
    ll N,M,X,Y;
    cin >> N>>M>>X>>Y;
    ll ans,tmp;
    cin >> ans;
    bool flag = true;
    for(int i=1;i<N;i++){
        cin >> tmp;
        if(ans < tmp){
            ans = tmp;
        }
    }
    ans++;

    for(int i=0;i<M;i++){
        cin >> tmp;
        if(tmp < ans){
            flag = false;
        }
    }

    if(ans <= X or Y < ans){
        flag = false;
    }


    if(flag == true){
        cout << "No War"<<endl;
    }else{
        cout << "War"<< endl;
    }
    return 0;
}