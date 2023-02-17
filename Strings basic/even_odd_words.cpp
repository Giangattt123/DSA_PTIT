#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp) v.push_back(tmp);
	for(int i=0;i<v.size();i++){
		if(i % 2 == 1){
			reverse(v[i].begin(),v[i].end());
			cout << v[i] << " ";
		}
		if(i % 2 == 0) cout << v[i] << " ";
	}
}
