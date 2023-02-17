#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ll n ;
	cin >> n;
	if(n == 1) cout <<"NO";
	else{
		ll can = sqrt(n);
		if(can * can == n) cout <<"YES";
		else cout << "NO";
	}
}

