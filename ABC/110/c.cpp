#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(void){
    string s,t;
    cin >> s>>t;
    bool flag = true;
    vector<char>words(int('z')+1);
    vector<char>wordt(int('z')+1);
    for(int i=0;i<words.size();i++){
        words[i] = '0';
        wordt[i] = '0';
        // cout << words[i]<<' ';
    }

    for(int i=0;i<s.length();i++){
        if(words[int(s[i])]=='0'){
            words[int(s[i])] = t[i];
        }else if(words[int(s[i])] != t[i] ){
            flag = false;
        }
    }

    for(int i=0;i<t.length();i++){
        if(wordt[int(t[i])]=='0'){
            wordt[int(t[i])] = s[i];
        }else if(wordt[int(t[i])] != s[i]){
            flag = false;
        }
    }

    // for(int i=0;i<words.size();i++){
    //     cout << words[i] <<' ';
    // }

    if(flag == true){
        cout << "Yes"<<endl;
    }else{
        cout << "No"<<endl;
    }
    return 0;

}