#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int first_digit(ll n){
	if(n < 10) return n;
	else return first_digit(n/10);
}
int main(){
	ll n;
	cin >> n;
	cout << first_digit(n);
}
