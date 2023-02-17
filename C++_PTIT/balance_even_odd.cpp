#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(ll n){
	int  even = 0 , odd = 0;
	while(n){
		int k = n % 10;
		if(k % 2 == 0) ++even;
		else ++odd;
		n /= 10;
	}
	if(even == odd) return true;
	else return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	ll min = pow(10,n-1);
	ll max = pow(10,n) - 1;
	int cnt = 0;
	for(int i=min;i<=max;i++){
		if(check(i)){
			cout << i << " ";
			++cnt;
			if(cnt == 10) cout << endl;
			cnt %= 10;
		}
	}
}

