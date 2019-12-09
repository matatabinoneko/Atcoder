#include<bits/stdc++.h>
using namespace std;


#define ll long long 
// vector<ll>odd;
// vector<ll>even;

vector<ll> count_odd(int(pow(10,6)));
vector<ll> count_even(int(pow(10,6)));

int main(void){
    for(int i=0;i<count_odd.size();i++){
        count_odd[i]=0;
        count_even[i]=0;
    }

    ll n;
    cin >> n;
    for(int i=0;i<n;i++){
        ll tmp;
        cin >> tmp;
        if(i%2==0){
            // even.push_back(tmp);
            count_even[tmp]++;
            
        }else{
            // odd.push_back(tmp);
            count_odd[tmp]++;
        }
    }

    ll odd_one=0,odd_two=0,odd_num1;
    for(int i=0;i<count_odd.size();i++){
        if(odd_two < count_odd[i]){
            if(odd_one < count_odd[i]){
                odd_num1 = i;
                odd_two = odd_one;
                odd_one = count_odd[i];
            }else{
                odd_two = count_odd[i];
            }
        }
    }
    ll even_one=0,even_two=0,even_num1;
    for(int i=0;i<count_even.size();i++){
        if(even_two < count_even[i]){
            if(even_one < count_even[i]){
                even_num1 = i;
                even_two = even_one;
                even_one = count_even[i];
            }else{
                even_two = count_even[i];
            }
        }
    }
    ll ans = 0;
    if(odd_num1 == even_num1){
        ll a=odd_one+even_two,b=odd_two+even_one;
        (a<b) ?ans = b :ans = a;
    }else{
        ans = odd_one + even_one;
    }
    // cout << odd_num1<<' ' << even_num1<<' '<<ans  <<  endl;
    // cout << odd_one << ' '<< odd_two << ' '<< even_one << ' ' <<even_two << endl;
    cout << n-ans<<endl;





}