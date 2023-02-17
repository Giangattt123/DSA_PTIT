#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long long check(ll n){
	ll ans = 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n % i ==0){
			ll cnt = 0;
			while(n % i == 0){
				cnt++;
				n/=i;
			}
			if(cnt > 1) return 0;
			else ans++;
		}
	}
	if(n != 1) ans++;
	if(ans == 3) return 1;
	else return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n;
	if(check(n)) cout<<"1";
	else cout<<"0";
}
