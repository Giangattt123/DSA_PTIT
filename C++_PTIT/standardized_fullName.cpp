#include<bits/stdc++.h>
using ll = long long;
using namespace std;
void chuanHoa(string &s){
	s[0] = toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
}
void inHoa(string &s){
	for(char &x : s) x = toupper(x);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin ,s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(int i=0;i<v.size() - 1;i++){
		chuanHoa(v[i]);
		cout << v[i];
		if(i != v.size() - 2) cout << " ";
		else cout << ", ";
	}
	inHoa(v.back());
	cout << v.back();
	
}

