#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll F[1000005];
void init(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i<= 1000000 ;i++){
		F[i] = (F[i-1] ) + (F[i-2]);
	}
}

bool check(ll n){
	for(int i=0;i<=100;i++){
		if( n == F[i]) return true;
	}
	return false;
}
int main(){
	init();
	ll n;
	cin >> n;
	if(check(n)) cout << "YES\n";
	else cout << "NO\n";
}
