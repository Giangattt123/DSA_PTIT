#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int solve(int n){
	if(n % 2  == 0) return 2;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n % i == 0)  return i;
	}
	return n;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			cout << solve(i) << " ";
		}
		cout << endl;
	}
}

