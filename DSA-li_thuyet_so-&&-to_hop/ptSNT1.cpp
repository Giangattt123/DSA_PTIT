// 2^2 * 3^1 * 5^1
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
void pt(ll n){
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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	pt(n);
}
