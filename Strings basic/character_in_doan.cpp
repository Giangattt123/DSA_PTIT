#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll str(string s){
	ll sum = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(48 <= s[i] && s[i] <= 57) sum+=s[i] - '0';
	}
	return sum;
}
int main(){
	string s;
	cin >> s;
	cout << str(s);
}
