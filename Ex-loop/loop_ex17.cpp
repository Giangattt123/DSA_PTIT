#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin>>n;
	ll sum = 0;
	while(n){
		int x = n % 10;
		sum+=x;
		n/=10;
	}
	cout<<sum;
}
