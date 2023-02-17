#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n;
	cin >> n;
	int cnt = 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			int res = 0;
			while(n % i == 0){
				++res;
				n /= i;
			}
			if(res == 1) ++cnt;
		}
	}
	if(n != 1) ++cnt;
	if(cnt == 3) cout << "1\n";
	else cout << "0\n";
}
