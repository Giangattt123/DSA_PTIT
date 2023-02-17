#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cin.ignore();
	set<string> se;
	for(int i=1;i<=n;i++){
		string s;
		getline(cin , s);
		se.insert(s);
	}
	cout << se.size();
}

