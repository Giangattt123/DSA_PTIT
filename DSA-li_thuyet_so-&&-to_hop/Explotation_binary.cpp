#include<bits/stdc++.h>
using ll = long long ;
using namespace std;

ll pow(ll a , ll b , ll c){
	if(b == 0) return 1;
	ll tmp = pow(a , b / 2,c);
	if(b % 2 == 1) return (tmp % c) * (tmp % c) % c  * (a % c) % c;
	else return (tmp % c) * (tmp % c) % c;
}

long long  pow2(ll a , ll b, ll c){
	long long res = 1;	
	while(b){
		if(b%2==1) {
			res *= a;
			res %= c;
		}
		b /= 2;
		a *= a;
		a %= c;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << pow(2,1000000000000000000,10) << endl;
	cout << pow2(2,1000000000000000000,10) << endl;
}
