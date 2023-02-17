#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll n){
	ll can = sqrt(n);
	if(can * can == n) return true;
	else return false;
}
int main(){
	ll n;
	cin >> n;
	if(check(n)) cout << "YES\n";
	else cout << "NO\n";
}
