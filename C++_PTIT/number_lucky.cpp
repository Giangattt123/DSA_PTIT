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
		cin.ignore();
		string s;
		cin >> s;
		int cnt = s.size();
		if(cnt == 1){
			cout << "0" << endl;
		}
		else{
			string x = s.substr(cnt-2,2);
			if(x == "86") cout << "1" << endl;
			else cout << "0" << endl;
		}
	}
}

