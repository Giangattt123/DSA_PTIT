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

bool cmp(string a, string b){
	if(a.size() < b.size()) return true;
	else return false;
}
int main(){
	string s;
	getline(cin , s);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		if(reversible(tmp) ) v.push_back(tmp);
	}
//	for(string x : v) cout << x << " ";
	cout << endl;
	stable_sort(v.begin(),v.end(),cmp);
	for(string x : v) cout << x << " ";
//	&& find(v.begin(),v.end(),tmp) == v.end()
}
