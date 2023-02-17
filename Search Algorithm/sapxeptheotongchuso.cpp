#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll sum(ll n){
	ll res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	return res;
}
bool comp(ll a , ll b){
	if(sum(a) != sum(b)) return sum(a) < sum(b);
	else return a < b;
}
int main(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	stable_sort(a,a+n,comp);
	for(int i=0;i<n;i++) cout << a[i] << " ";
}
