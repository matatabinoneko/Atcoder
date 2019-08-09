#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int>P;

int main(void){
    int ans;
    int n;  cin >> n;
    vector<P>red(n),blue(n);
    for(int i=0;i<n;i++){
        int first,second; cin >> first >> second;
        red[i] = {second,first};
    }
    for(int i=0;i<n;i++){
        int first,second; cin >> first >> second;
        blue[i] = {first,second};
    }

    vector<bool>have_been(n);

    sort(red.begin(),red.end());
    sort(blue.begin(),blue.end());

    for(int i=0;i<n;i++){
        int tmp = red[i].first;
        red[i].first = red[i].second;
        red[i].second = tmp;
    }
    int cnt=0;
    int idx = 0;
    for(int i=0;i<n;i++){
        for(int j=n-1;0<=j;j--){
            if(red[j].first < blue[i].first && red[j].second < blue[i].second && have_been[j] == false) {
                cnt++;
                have_been[j] = true;
                break;
                // cout << red[j].first <<',' << red[j].second  <<' ' << blue[i].first << ',' << blue[i].second << endl;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}