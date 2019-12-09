#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int h,w; cin >> h >> w;
    vector<string>s(h);
    for(int i=0;i<h;i++) cin >> s[i];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int cnt=0;
            if(s[i][j]=='.'){
                if(0<=i-1 && s[i-1][j]=='#')cnt++;
                if(i+1<h && s[i+1][j]=='#')cnt++;
                if(0<=i-1 && 0<=j-1 && s[i-1][j-1]=='#')cnt++;
                if(0<=i-1 && j+1<w && s[i-1][j+1]=='#')cnt++;
                if(0<=j-1 && s[i][j-1]=='#')cnt++;
                if(j+1<w && s[i][j+1]=='#')cnt++;
                if(i+1<h && 0<=j-1 && s[i+1][j-1]=='#')cnt++;
                if(i+1<h && j+1<w && s[i+1][j+1]=='#')cnt++;
                cout << cnt;
            }else{
                cout << s[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}