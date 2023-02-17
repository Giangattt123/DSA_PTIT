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
	stringstream ss(s);
	string tmp;
	vector<string> v; 
	while(ss >> tmp) v.push_back(tmp);
	ll cnt = 0;
	for(ll i=0;i<v.size();i++){
		if(v[i] == "28tech") ++cnt;
	}
	cout << cnt;
	
}
