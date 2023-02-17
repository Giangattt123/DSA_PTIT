#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long divisor_count(ll n){
	ll count = 0;
	for(ll i = 1 ; i <= sqrt(n) ; i++){
		if(n%i==0){
			++count;
			if(i!=n/i) ++count;
		}
	}
	return count;
}

void in(ll n){
	for(ll i = 1 ; i <= n ; i++){
		if(n%i==0) cout << i << " ";
	}
}
int main(){
	ll n;
	cin >> n;
	cout << divisor_count(n) << endl;
	in(n);
}
