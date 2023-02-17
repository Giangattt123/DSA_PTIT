#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	ll res = 1;
	for(ll i=1;i<=n;i++){
		res *= i;
	}
	cout<<res;
}
