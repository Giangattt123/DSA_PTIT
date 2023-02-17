#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll sum = 0;
		for(auto x : s){
			sum = sum * 10 + x - '0';
			sum %= 11;
		}
		cout << (sum == 0) << endl;
	}
}

