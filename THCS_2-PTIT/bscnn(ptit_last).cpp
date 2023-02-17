/* cho stn n tim ra so nho nhat chia het cho cac so tu 1 , 2 , 3 , ... , n
so bo test 2 
3 --> 6
5 --> 60
*/
#include<bits/stdc++.h>
#include<algorithm>
using ll = long long;
using namespace std;
// Euclid algorithm-->greatest common divisor : gcd(UCLN)
ll gcd(ll a , ll b){
	ll r;
	while(b){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
// least common multiple --> lcm(BCNN)
ll lcm(ll n){
	ll m = 1;
	for(ll i=n/2+1;i<=n;i++){
		m = i*(m/gcd(i,m));
	}
	return m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << lcm(n) << endl;
	}
}
