#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool snt(ll n){
	if(n < 2) return false;
	for(ll i=2;i<=sqrt(n);i++){
		if(n % i ==0) return false;
	}
	return true;
}
int main(){
	ll n;
	cin >> n;
	if(snt(n)) cout<<"YES\n";
	else cout<<"NO";
}
