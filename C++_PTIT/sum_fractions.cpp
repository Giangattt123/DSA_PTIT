#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n;
	cin >> n;
	double sum = 0;
	for(ll i=1;i<=n;i++){
		sum += 1.0 * 1 / i;
	}
	cout << fixed << setprecision(4) << sum;
}
