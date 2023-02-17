#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void pt(ll n){
	cout << "Phan tich thua so nguyen to n:" << endl;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				++mu;
				n /= i;
			}
			cout << i << "^" << mu;
			if(n != 1) cout << " * ";
		}
	}
	if(n > 1) cout << n << "^1";
}

ll ph_euler(ll n){
	ll res = n;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			res -= res / i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n > 1) res -= res / n;
	return res;
}

int check(int n, int k){
	int cnt = 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			while(n % i == 0){
				++cnt;
				n /= i;
				if(cnt == k) return i;
			}
		}
	}
	if(n != 1) ++cnt;
	if(cnt == k) return n;
	else return 0;
}

void solve(ll n){
	int cnt[10] = {0};
	int a[100], dem = 0;
	while(n){
		cnt[n % 10]++;
		a[dem] = n % 10;
		++dem;
		n /= 10;
	}
	cout << "Tang dan cs nguyen to:" << endl;
	if(cnt[2]) cout << 2 << " " << cnt[2] << endl;
	if(cnt[3]) cout << 3 << " " << cnt[3] << endl;
	if(cnt[5]) cout << 5 << " " << cnt[5] << endl;
	if(cnt[7]) cout << 7 << " " << cnt[7] << endl;
	cout << "In ra theo thu tu xuat hien:" << endl;
	for(int i = dem - 1;i >= 0 ; i--){
		if(a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7){
			if(cnt[a[i]] != 0)
				cout << a[i] << " " << cnt[a[i]] << endl;
			cnt[a[i]] = 0;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n , k;
	cin >> n >> k;
	pt(n);
	cout << endl;
	cout << "Phi ham euler ta co:" << endl;
	cout << ph_euler(n) << endl;
	cout << "Thua so nguyen to thu k la:" << endl;
	cout << check(n,k) << endl;
	solve(n);
	cout << endl;
}
