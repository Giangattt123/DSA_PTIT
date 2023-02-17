#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt = 1;
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == s[i+1]) cnt++;
			else {
				cout << s[i] << cnt;
				cnt = 1;
			}
		}
		cout << endl;
	}
}

