#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    vector<vector<int>>bingo(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> bingo[i][j];
        }
    }
    int n; cin >>n;
    for(int i=0;i<n;i++){
        int b; cin >> b;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(b==bingo[j][k]){
                    bingo[j][k]=-1;
                }
            }
        }
    }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout << bingo[i][j] << ' ';
    //     }cout << endl;
    // }cout << endl;

    bool flag = false;
    for(int i=0;i<3;i++){
        flag=false;
        for(int j=0;j<3;j++){
            if(bingo[i][j]!=-1) flag=true;
        }
        if(flag==true) continue;
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0;i<3;i++){
        flag=false;
        for(int j=0;j<3;j++){
            if(bingo[j][i]!=-1) flag=true;
        }
        if(flag==true) continue;
        cout << "Yes" << endl;
        return 0;
    }
    flag=false;
    for(int i=0;i<3;i++){
        if(bingo[i][i]!=-1)flag = true;
    }
    if (flag!=true){
        cout << "Yes" << endl;
        return 0;
    } 

    flag=false;
    for(int i=0;i<3;i++){
        if(bingo[i][2-i]!=-1)flag = true;
    }
    if (flag!=true){
        cout << "Yes" << endl;
        return 0;
    } 

    cout << "No" << endl;
    return 0;
}