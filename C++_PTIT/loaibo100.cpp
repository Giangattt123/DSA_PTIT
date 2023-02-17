#include<bits/stdc++.h> 
using namespace std; 
using ll = long long; 
int main(){ 
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; 
	cin >> t; 
	while(t--){ 
		string s; 
		cin >> s; 
		int cnt = 0; 
		while(s.find("100")!=string::npos){ 
			auto it=s.find("100"); 
			s.erase(s.begin()+it,s.begin()+it+3); 
			cnt += 3; 
		} 
		if(cnt)
			cout << cnt << endl; 
	} 
} 