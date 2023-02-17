// dem so luong uoc so cua n!
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int maxn = (int) 1e5;
const int mod = 1e9 + 7;
int prime[maxn + 1];
void sang(){
	for(int i=0;i<=maxn;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i=2;i<=sqrt(maxn);i++){
		if(prime[i]){
			for(int j=i*i;j<=maxn;j+=i){
				prime[j] = 0;
			}
		}
	}
}

ll legendre(ll n , ll p){
	ll res = 0;
	for(int i=p;i<=n;i*=p){
		res += n / i;
	}
	return res;
}

ll legendre1(ll n , ll p){
	ll d = 0;
	while(n){
		n = n / p;
		d += n;
	}
	return d;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sang();
	ll n;
	cin >> n;
	ll ans = 1;
	for(int i=1;i<=n;i++){
		if(prime[i]){
			int mu = legendre(n,i);
			ans = ans * (mu + 1);
			ans %= mod;
		}
	}
	cout << ans;
}
