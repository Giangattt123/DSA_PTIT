#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int K;
	cin >> K;
	string t = "28tech";
	string tmp = "";
	for(int i=0;i<s.size();i++){
		if(i < K) tmp += s[i];
		else if(i == K) tmp += t + s[i];
		else tmp += s[i];
	}
	cout << tmp;
}