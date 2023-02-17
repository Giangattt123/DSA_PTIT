#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	string s;
	getline(cin ,s);
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])) s[i] = toupper(s[i]);
	}
	
	cout << s << endl;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])) s[i] = tolower(s[i]);
	}
	cout << s;
}