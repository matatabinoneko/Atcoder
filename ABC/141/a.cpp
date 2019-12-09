#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int>P;

int main(void){
    string s; cin >> s;
    if(s=="Sunny") cout << "Cloudy" << endl;
    else if(s=="Rainy") cout << "Sunny" << endl;
    else cout << "Rainy" << endl;
    return 0;
}