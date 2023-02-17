#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n, sum = 0;
	cin >> n;
	for(ll i=1;i<=sqrt(n);i++){
		if(n % i == 0){
			if(i != n / i) sum += i + n / i;
			else sum += i;
		}
	}
	cout << sum;
}
