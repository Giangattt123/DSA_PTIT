#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n , p;
	cin >> n >> p;
	long long sum = 0;
	for(long long k=p;k<=n;k*=p){
		sum+=n/k;
	}
	cout << sum;
}
