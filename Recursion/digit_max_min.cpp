#include<bits/stdc++.h>
#include<cmath>
using ll = long long;
using namespace std;
long long find_max(ll n){
	if(n < 10) return n;
	else return max(n % 10,find_max(n / 10));
}
long long find_min(ll n){
	if(n < 10) return n;
	else return min(n % 10,find_min(n / 10));
}
int main(){
	ll n;
	cin >> n;
	cout << find_max(n) << " " << find_min(n);
}
