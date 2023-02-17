#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(string s){
	int cnt[26] = {0};
	for(int i=0;i<s.size();i++){
		cnt[s[i] - 'a'] = 1;
	}
	for(int i=0;i<26;i++){
		if(cnt[i] == 0) return 0;
	}
	return 1;
}
int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	if(check(s)) cout << "YES";
	else cout << "NO";
}
