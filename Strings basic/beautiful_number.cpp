#include<bits/stdc++.h>
using ll = long long;
using namespace std;

bool number(string s){
	for (int i = 0; i < s.size() - 1 ; ++i)
	{
		if(s[i] != s[i+1] + 1 && s[i] != s[i+1] -1) return 0;
	}
	return 1;
}

int main(){
	string s;
	cin >> s;
	if(number(s)) cout << "YES";
	else cout << "NO";
}