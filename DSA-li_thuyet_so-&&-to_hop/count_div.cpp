#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n, cnt = 0;
	cin >> n;
	for(ll i=1;i<=sqrt(n);i++){
		if(n % i == 0){
			++cnt;
			if(i != n/i) ++cnt;
		}
	}
	cout << cnt;
}
