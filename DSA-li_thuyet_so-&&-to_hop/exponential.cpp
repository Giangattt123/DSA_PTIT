#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll lt(ll a , ll b, ll c){
	ll res = 1;
	while(b != 0){
		if(b % 2 == 1){
			res = ((res % c) * (a % c)) % c;
		}
		a = (a % c) * (a % c) % c;
		a %= c;
		b /= 2;
	}
	return res;
}
int main(){
	ll a , b;
	cin >> a >> b;
	cout << lt(a,b,mod);
}
