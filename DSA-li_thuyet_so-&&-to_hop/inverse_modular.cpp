#include<bits/stdc++.h>
using ll  = long long;
using namespace std;
// (A / B) % C = ((A % C) * (B^-1 % C)) % C
// B % M ma ton tai 1 so x sao cho B . x % M = 1 --> x dc goi la nghich dao modular cua B duoi modun M
// B . x % M  = 1 hay B x dd 1 ( mod M )
// dieu kien ton tai x : GCD(B,M) = 1 ( 1 <= X <= M - 1)
int x,y,g;
// ax + by = gcd(a,b) = g
// Time complexity : O(logN)
void extended_gcd(int a , int b){
	if(b == 0){
		g = a;
		x = 1;
		y = 0;
		return;
	}
	extended_gcd(b, a % b);
	int tmp = x;
	x = y;
	y =  tmp  - a / b * y;
}

void inverse(int b, int m){
	for(int i=1;i<=m-1;i++){
		if(b * i % m == 1){
			cout << i << endl;
			return;
		}
	}
	cout << "Khong tim thay nghich dao modular" << endl;
}

ll powMod(ll a , ll b , ll c){
	ll res = 1;
	while(b){
		if(b % 2 == 1) {
			res *= a;
			res %= c;
		}
		a *= a;
		a %= c;
		b /= 2; 
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	extended_gcd(24,17);
	cout << g << " " << x << " " << y << endl;
	inverse(11,3);
	inverse(20,14);
	extended_gcd(15,8);
	if(g != 1){
		cout << "Khong co nghich dao modular" << endl;
	}
	// xu li dau am trong nghich dao modular (x % m + m) % m
	else{
		cout << (x % 8 + 8) % 8 << endl;
	}
	int  a = 2 , p = 11;
	cout << powMod(2,p-2,p) << endl;
}
