// f(n) = - 1 + 2 - 3 + .. + (- 1)^n * n
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n;
	cin >> n;
	ll sumchan = 0,sumle = 0;
	for(ll i=1;i<=n;i++){
		if(i % 2 == 0) sumchan += i;
		else sumle = sumle += i;
	}
	cout << sumchan - sumle;
}
