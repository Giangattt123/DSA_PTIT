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
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		int cnt = 0;
		while(ss >> tmp){
			++cnt;
		}
		cout << cnt << endl;
	}
}

