#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int sum_digit(ll n){
	if(n < 10) return n;
	else return n % 10 + sum_digit(n/10);
}
int main(){
	ll n;
	cin >> n;
	cout << sum_digit(n);
}
