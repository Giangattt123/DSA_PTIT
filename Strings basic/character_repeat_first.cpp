#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin , s); // heello
	int cnt[256] = {0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]]++;
		if(cnt[s[i]] == 2){
			cout << s[i];
			return 0;
		}
	}
	cout << "NONE";
	return 0;

}