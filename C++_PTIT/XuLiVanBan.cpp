
#include<bits/stdc++.h> 
using namespace std; 
using ll = long long;
bool check_end(string s){ 
	if(s[s.size() - 1] == '!' || s[s.size() - 1] == '.' || s[s.size()-1] == '?') 
		return true; 
	return false; 
} 
int main(){ 
	string str , tmp = ""; 
	vector<string> v; 
	while(cin >> str){ 
		if(tmp == ""){ 
			tmp = tmp + str; 
		}else{ 
			tmp = tmp + " " + str; 
		} 
		if(check_end(tmp) == 1){ 
			tmp.pop_back(); 
			tmp[0] = toupper(tmp[0]); 
			for(int i = 1; i < tmp.size(); i++){ 
				tmp[i] = tolower(tmp[i]); 
			} 
			v.push_back(tmp); tmp = ""; 
		} 
	} 
	for(string x : v){ 
		cout<<x<<endl; 
	} 
}