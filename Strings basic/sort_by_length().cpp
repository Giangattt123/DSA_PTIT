#include<bits/stdc++.h>
#include<algorithm>
using ll = long long;
using namespace std;
bool cmp(string a , string b){
	if(a.size() != b.size()){
		if(a.size() < b.size()) return true;
		else return false;
	}
	else{
		if(a < b) return true;
		else return false;
	}
}
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	sort(v.begin() , v.end(),cmp);
	for(string x : v) cout << x << " ";
}
