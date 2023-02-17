#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int digit(ll n){
	if(n < 10) return 1;
	else return 1 + digit(n/10);
}
int main(){
	ll n;
	cin >> n;
	cout << digit(n);
}
