#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	ll res = 1;
	for(ll i =1 ;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i) res *= i * n/i;
			else res *= i;
		}
	}
	cout << res;
}
