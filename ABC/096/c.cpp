#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int h, w; cin >> h >> w;
    vector<string> mass(h+2);

    for(int i=0;i<h+2;i++){
        if(i==0 || i==h+1){
            for(int j=0;j<w+2;j++)mass[i]+='.';
        }else{
            string a; cin >> a;
            mass[i] = '.'+a+'.';
        }
    }

    // for(int i=0;i<h+2;i++){
    //     cout <<mass[i]<< endl;
    // } 
    bool flag;
    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
    for(int i=1;i<h+1;i++){
        for(int j=1;j<w+1;j++){
            if(mass[i][j]=='#'){
                flag = false;
                for(int k=0;k<4;k++){
                    if(mass[i+dx[k]][j+dy[k]]=='#')flag = true;
                }
                if(flag == false) {
                    cout << "No" << endl;
                    retursn 0;
                }
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}