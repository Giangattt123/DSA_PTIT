#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ll n;
	cin >> n;
	ll can = sqrt(n);
	if(can * can == n) cout<<"YES";
	else cout<<"NO";
}
