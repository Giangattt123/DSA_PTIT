#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Toi Yeu PTIT / Toi --> Yeu PTIT
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin ,s);
	string a;
	cin >> a;
	vector<string> v;
	for(int i=0;i<s.size();i++){
		if(s[i] != ' '){
			int p = i;
			while(s[p] != ' ' && p < s.size()) p++;
			v.push_back(s.substr(i,p-i));
			i=p;
		}
	}
	for(int i=0;i<v.size();i++){
		if(v[i] != a) cout << v[i] << " ";
	}
}

