#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll F[100];
void init(){
	F[0] = 0;
	F[1] = 1;
	for(int i=2;i<=93;i++){
		F[i] = F[i-1] + F[i-2];
	}
}

bool check(ll n){
	for(int i=0;i<=93;i++){
		if(n == F[i]) return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	init();
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

