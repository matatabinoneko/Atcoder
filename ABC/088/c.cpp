#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }
    vector<int>sum;
    sum.push_back(c[0][0]+c[1][1]+c[2][2]);
    sum.push_back(c[0][1]+c[1][2]+c[2][0]);
    sum.push_back(c[0][2]+c[1][0]+c[2][1]);
    sum.push_back(c[0][2]+c[1][1]+c[2][0]);
    sum.push_back(c[0][1]+c[1][0]+c[2][2]);
    sum.push_back(c[0][0]+c[1][2]+c[2][1]);

    for(int i=0;i<5;i++){
        if(sum[i]!=sum[i+1]){
            cout << "No"<<endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}