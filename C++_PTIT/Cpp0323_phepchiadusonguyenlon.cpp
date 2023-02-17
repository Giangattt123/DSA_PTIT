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
		string n;
		ll m;
		cin >> n >> m;
		ll result = 0;
		for(int i = 0 ; i < n.size() ; i++){
			result = (result * 10 + (n[i] - '0')) % m;
		}
		cout << result << endl;
	}
}

