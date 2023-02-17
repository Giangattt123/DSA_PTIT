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
		cin >> s;// ABCDEAABC
		map<char,int>mp;
		for(auto x : s){
			mp[x]++;
		}
		for(auto it : s){
			if(mp[it] == 1){
				cout << it;
			}
		}
		cout << endl;
	}
}


