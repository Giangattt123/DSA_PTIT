#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(string s){
	for(int i=1;i<s.size();i++){
		if(abs(s[i] - s[i-1]) != 1) return false;
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
		cin.ignore();
		string s;
		cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

