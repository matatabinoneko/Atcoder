#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    string S;
    cin >> S;
    vector<string> day = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cout << 7 - (find(day.begin(), day.end(), S) - day.begin()) << endl;
    return 0;
}