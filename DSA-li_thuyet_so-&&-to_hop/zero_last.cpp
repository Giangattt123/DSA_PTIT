#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll FEDegree(ll n , ll p){
	ll d = 0;
	while(n){
		n = n / p;
		d += n;
	}
	return d;
}
int main(){
	ll n;
	cin >> n;
	cout << FEDegree(n,5);
}
/*
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int MOD = (int) 1e9 + 7;
int main(){
    ll n,sum = 0;
    cin >> n;
    for(ll k=5;k<=n;k*=5){
        sum += n/k;
        sum %= MOD;
    }
    cout << sum;
}
*/
