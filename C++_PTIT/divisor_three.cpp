#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(int n){
	if(n < 2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0) return false;
	}
	return true;
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
		for(int i=2;i<=sqrt(n);i++){
			if(check(i))cout << i*i << " ";
		}
		cout << endl;
	}
}

