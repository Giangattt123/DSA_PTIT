#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Recursion
ll gcd(ll a , ll b){
	if(b == 0) return a;
	else return gcd(b , a % b);
}

// White loop
ll gcd1(ll a , ll b){
	while(b){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll lcm(ll a , ll b){
	return a/gcd(a,b) * b;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll a , b;
	cin >> a >> b;
	cout << gcd(a,b) << " " << lcm(a,b);

}

