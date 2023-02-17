#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(ll n){
	ll can = sqrt(n);
	if(can * can == n) return true;
	else return false;
}
int main(){
	ll n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
}
