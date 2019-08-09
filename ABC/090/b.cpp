#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    string a,b;
    cin >> a >> b;
    int cnt = 0;
    for(int i=stoi(a);i<=stoi(b);i++){
        string word = to_string(i);
        string rev = word;
        reverse(rev.begin(),rev.end());
        if(word==rev) cnt++;
    }
    cout << cnt << endl;
    return 0;
}