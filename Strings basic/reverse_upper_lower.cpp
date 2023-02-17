#include<bits/stdc++.h>
using ll = long long;
using namespace std;
string reverse(string s){
	string a = s;
	int l = 0;
	int r = a.size() - 1;
	while(l <= r){
		swap(a[l],a[r]);
		++l;
		--r;
	}
	return a;
}

string lower(string s){
	string b = s;
	for(int i = 0 ; i < b.size() ; i++){
		if(65 <= b[i] && b[i] <= 90) b[i] += 32;
	}
	return b;
}

string lower1(string s){
	string d = "";
	for(char x : s){
		d += tolower(x);
	}
	return d;
}

string upper(string s){
	string c = s;
	for (int i = 0; i < c.size() ; ++i)
	{
		if(97 <= c[i] && c[i] <= 122) c[i] -= 32;	
	}
	return c;
}

string upper1(string s){
	string e = "";
	for(char x : s){
		e += toupper(x);
	}
	return e;
}
int main(){
	string s;
	cin >> s;
	cout << reverse(s) << endl;
	cout << lower(s) << endl;
	cout << upper(s) << endl;
	cout << lower1(s) << endl;
	cout << upper1(s) << endl;
}