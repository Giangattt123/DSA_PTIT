#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin , s);
	for(char &x : s){
		x = tolower(x);
	}
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	int cnt = 1;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++){
		if(v[i] != v[i+1]) ++cnt;
	}
	cout << cnt;
}
