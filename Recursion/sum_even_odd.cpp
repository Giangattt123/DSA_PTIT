#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int even(ll n){
	if(n < 10){
		if(n % 2 == 0) return n;
		else return 0;
	}
	else{
		int r = n % 10;
		if(r % 2 == 0) return n % 10 + even(n / 10);
		else return even(n / 10);
	}

}
int odd(ll n){
	if(n < 10){
		if(n % 2 == 1) return n;
		else return 0;
	}
	else{
		int r = n % 10;
		if(r % 2 == 1) return n % 10 + odd(n / 10);
		else return odd(n / 10);
	}
}
int main(){
	ll n;
	cin >> n;
	cout << even(n) << endl << odd(n);
}
