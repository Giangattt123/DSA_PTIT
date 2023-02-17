#include<bits/stdc++.h>
using ll = long long;
using namespace std;

bool check(string s){
	for(auto x : s){
		if((x - '0') % 2 == 1) return 0;
	}
	return 1;
}

bool reversible(string s){
	int l = 0, r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r]) return 0;
		++l;
		--r;
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(reversible(s) && check(s)) cout << "YES" << endl;
		else cout << "NO\n";
	}
}

