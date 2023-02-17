#include<bits/stdc++.h>
#include<ctype.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s; // dd/mm/yyyy
	cin >> s;
	string a = "0";
	string t = "";
	if(s.size() == 8){
		for(int i=0;i<s.size();i++){
			if(i < 2) t = t + s[i];
			else if(i == 2) t = t + a + s[i];
			else t = t + s[i];
		}
		cout << a + t;
	}
	if(s.size() == 9){
		if(s[2] == '/'){
			for(int i=0;i<s.size();i++){
				if(i < 3) t = t + s[i];
				else if(i == 3) t = t + a + s[i];
				else t = t + s[i];
			}
			cout << t;
		}
		else{
			cout << a + s;
		}
	}
	if(s.size() == 10) cout << s;

}
