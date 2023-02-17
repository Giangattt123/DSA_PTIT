#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin ,s);
	for(char &x : s) x = tolower(x);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	cout << v[v.size()-1];
	for(int i=0;i<=v.size() - 2;i++){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
}

