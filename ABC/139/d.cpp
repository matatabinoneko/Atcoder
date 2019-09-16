#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
	ll n; cin >> n; n--;
	ll ans = (1+n) * (n/2);
	if(n%2!=0) ans += (n/2) + 1;
	cout << ans << endl;

	return 0;
}
