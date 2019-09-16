#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(void){
    string s,t; cin>> s >> t;

    vector<vector<ll>>word_cnt(1000);
    for(int i=0;i<s.length();i++){
        word_cnt[s[i]].push_back(i);
    }
    for(int i=0;i<='z';i++){
        sort(word_cnt[i].begin(),word_cnt[i].end());
    }


    // for(int i=0;i<t.length();i++){
    //     for(int j=0;j<word_cnt[t[i]].size();j++){
    //         cout << word_cnt[t[i]][j] <<' ';
    //     }
    //     cout << endl;
    // }


    ll cnt=0, previous=-1;
    for(int i=0; i<t.length();i++){
        if(word_cnt[t[i]].size()==0){
            cout << -1 << endl;
            return 0;
        }
        bool flag=false;
        for(int j=0;j<word_cnt[t[i]].size();j++){
            if(previous < word_cnt[t[i]][j]){
                flag = true;
                previous = word_cnt[t[i]][j];
                break;
            } 
        }
        if(flag == false) cnt++, previous=word_cnt[t[i]][word_cnt[t[i]].size()-1];
    }


    if(previous==-1){
        previous = s.find(t[t.length()-1]);
    }

    cout << cnt*s.length() + previous + 1 << endl;
    return 0;
}
