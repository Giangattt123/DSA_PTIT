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
	getline(cin ,s);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		if(reversible(tmp)) v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	for(string x : v) cout << x << " ";
}
