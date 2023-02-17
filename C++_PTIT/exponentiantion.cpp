#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll powMOD(ll a , ll b, ll c){
	ll res = 1;
	while(b){
		if(b % 2){
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
	int t;
	cin >> t;
	while(t--){
		int x , y ,p;
		cin >> x >> y >> p;
		cout << powMOD(x,y,p) << endl;
	}
}
