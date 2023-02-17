#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int check(string s){
	for(int i = 0 ;i<s.size() ; i++){
		if(!isupper(s[i])) return 0;
	}
	return 1;
}
int main(){
	// đếm số từ trong 1 xâu
		// string s;
		// getline(cin , s);
		// int cnt = 0;
		// if(s[0] != ' ') ++cnt;
		// for(int i=0;i<s.size();i++){
		// 	if(s[i] == ' ' && s[i+1] != ' '){
		// 		++cnt;
		// 	} 
		// }
		// cout << cnt;

	// đếm số từ in hoa trong 1 xâu
	string s;
	getline(cin , s);
	int count = 0;
	string res = "";
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])) res += s[i];
		
	}
}