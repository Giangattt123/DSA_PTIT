#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll FEDegree(ll n , ll p){
	ll d = 0;
	while(n){
		n = n / p;
		d += n;
	}
	return d;
}
int main(){
	ll n,p;
	cin >> n >> p;
	cout << FEDegree(n,p);
}
