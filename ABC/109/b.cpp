#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin >> n;
    vector<string> v;
    string word;
    string next;
    cin >> word;
    v.push_back(word);
    bool flag = true;
    for(int i=1;i<n;i++){
        cin >> next;
        if(word[word.length()-1]!=next[0]){
            flag = false;
            break;
        }else{
            for(int j=0;j<v.size();j++){
                if(next == v[j]){
                    flag = false;
                    break;
                }
            }
        }
        v.push_back(next);
        word = next;
    }
    if(flag == true){
        cout << "Yes"<<endl;
    }else{
        cout << "No"<<endl;
    }
    return 0;
}