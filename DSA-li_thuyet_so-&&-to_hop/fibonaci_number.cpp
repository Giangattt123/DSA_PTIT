#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll F[105]; // F[i]: so fibo thu i
void init(){
	F[0] = 0;
	F[1] = 1;
	for(int i=2;i<=100;i++){
		F[i] = F[i-1] + F[i-2];
	}
}

bool check(ll n){
	for(int i=0;i<=92;i++){
		if(n == F[i]) return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	init();
	for(int i=0;i<=100;i++){
		cout << F[i] << endl;
	}
	ll n;
	cin >> n;
	if(check(n)) cout << "YES\n";
	else cout << "NO\n";
}
