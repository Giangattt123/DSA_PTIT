#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	cout << s << endl;
	sort(s.begin(),s.end(),greater<char>());
	cout << s;
}
