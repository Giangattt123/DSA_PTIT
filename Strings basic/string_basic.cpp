#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	getline(cin , s);
	cout << s.size() << endl;
	cout << s.length() << endl;
	for(char &x : s){
		x = 'a';
	}
	for(auto it = s.begin() ; it!=s.end();it++) cout << *it ;
	cout << endl;
	string str = "python";
	str.push_back('g');
	str.pop_back();
	cout << str << endl;
	str.insert(2,"@@@@");
	cout << str << endl;
	// cout << str;
	str.erase(2,4);
	cout << str << endl;
	str.erase(2);
	cout << str << endl;

	cout << "Ham find trong xau ki tu:" << endl;
	string a = "phung duc giang";
	string b = "duc";
	string c = "hello";
	if(a.find(b) != string::npos){
		cout << "FOUND" << endl;
		cout << a.find(b) << endl;
	}else cout << "NOT FOUND" << endl;
	if(a.find(c) != string::npos){
		cout << "FOUND" << endl;
		cout << a.find(c) << endl;
	}else{
		cout << "NOT FOUND" << endl;
		cout << a.find(c) << endl;
	}

	cout << "So sanh va cong xau:" << endl;
	string d="28tech";
	string e = "28tech";
	cout << (d==e) << endl;
	cout << (d<e) << endl;
	cout << (d<=e) << endl;
	cout << (d!=e) << endl;
	cout << c + " " + a << endl;

	// reverse
	string chuoi = "python";
	reverse(chuoi.begin(),chuoi.end());
	cout << chuoi << endl;
	
}