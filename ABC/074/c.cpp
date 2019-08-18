#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    int a,b,c,d,e,f; cin >> a >> b >> c >> d >> e >> f;
    set<int>s;
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            if(i==j && i==0) continue;
            int water = 100*a*i + 200*b*j;
            if(water <=f)s.insert(water);
        }
    }
    int ans_water=2,ans_sugar=-1;
    for(auto iter=s.begin();iter!=s.end();iter++){
        int water = *iter, max_sugar=min(f-water,water*e/100);
        // cout << water <<' ' << max_sugar << endl;
        for(int i=0;i<=max_sugar/c;i++){
            int sugar = max_sugar - max(0,(max_sugar - i*c)%d);

            if(water+sugar <= f && double(ans_sugar)/(ans_water+ans_sugar) < double(sugar)/(water+sugar)) ans_water = water, ans_sugar = sugar;
        }
    }
    cout << ans_water+ans_sugar << ' ' << ans_sugar << endl;
    return 0;
}