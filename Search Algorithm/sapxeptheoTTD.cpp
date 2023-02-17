#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool comp(ll a , ll b){
	if(abs(a) < abs(b)) return true;
	else return false;
}
int main(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	stable_sort(a,a+n,comp);
	for(int i=0;i<n;i++) cout << a[i] << " ";
}
