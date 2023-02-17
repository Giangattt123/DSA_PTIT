#include<bits/stdc++.h>
// using ll = long long;
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int cnt1 = 0 , cnt2 = 0 , cnt3 = 0;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])) ++cnt1;
		else if(isdigit(s[i])) ++cnt2;
		else ++cnt3;
	}
	cout << cnt1 << " " << cnt2 << " " << cnt3;
}