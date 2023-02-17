#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool reversible(string s){
	int l = 0 , r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r]) return false;
		++l;
		--r;
	}
	return true;
}
int main(){
	string s;
	cin >> s;
	if(reversible(s)) cout << "YES";
	else cout <<"NO";
}
