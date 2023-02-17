#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check_even(ll n){
	if(n < 10){
		if(n % 2  == 0) return true;
		else return false;
	}
	else{
		int r = n % 10;
		if(r % 2 == 0) return check_even(n / 10);
		else return false;
	}
}
int main(){
	ll n;
	cin >> n;
	if(check_even(n)) cout <<"YES";
	else cout << "NO";
}

