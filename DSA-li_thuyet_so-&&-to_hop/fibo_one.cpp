#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll F[105];
void init(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i<= 100 ;i++){
		F[i] = ( F[i-1] + F[i-2] ) % mod;
	}
}
int main(){
	init();
	ll n;
	cin >> n;
	cout << F[n-1];
}
