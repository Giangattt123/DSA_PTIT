#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	string s;
	getline(cin , s);
	string t = ".,!?";
	// string tmp = "";
	// for(int i=0;i<s.size();i++){
	// 	int ok = 0;
	// 	for(int j=0;j<t.size();j++){
	// 		if(s[i] == t[j]) ok = 1;
	// 	}
	// 	if(ok == 0) tmp += s[i];
	// }
	// cout << tmp << endl << tmp.size();

	for(int i=0;i<s.size();i++){
		for(int j=0;j<t.size();j++){
			if(s[i] == t[j]) s.erase(i,1);
		}
	}
	for(char c : s) cout << c;


}