#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int f(int n){
	if(n == 1) return 0;
	int tt1 = 1e9 , tt2 = 1e9 , tt3 = 1e9;
	if(n % 2 == 0) tt1 = 1 + f(n/2);
	if(n % 3 == 0) tt2 = 1 + f(n/3);
	if(n > 1) tt3 = 1 + f(n - 1);
	return min({tt1,tt2,tt3});
}
int main(){
	ll n;
	cin >> n;
	cout << f(n);
}
