#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int check_in_hoa(string s){
	for(int i=0;i<s.size();i++){
		if(!isupper(s[i])) return 0;
	}
	return 1;
}
int main(){
	string s;
	getline(cin , s);
	stringstream ss(s);
	string tmp;
	int count = 0;
	while(ss >> tmp){
		if(check_in_hoa(tmp)) ++count;
	}
	cout << count;
}