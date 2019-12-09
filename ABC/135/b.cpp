#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    int n;
    cin >> n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin >>p[i];
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vector<int>tmp(n);
            for(int k=0;k<n;k++){
                tmp[k] = p[k];
            }
            int t;
            t = tmp[i];
            tmp[i] = tmp[j];
            tmp[j] = t;
            // cout << tmp[2];
            flag = true;
            for(int k=1;k<n;k++){
                // cout << tmp[k] << tmp[k-1] << endl;
                if(tmp[k] < tmp[k-1]){
                    flag = false;
                }
            }
            if(flag == true){
                cout << "YES" << endl;
                break;
            }
        }
        if(flag == true){
            break;
        }
    }
    if(flag == false){
        cout << "NO"<<endl;
    }
    return 0;
}