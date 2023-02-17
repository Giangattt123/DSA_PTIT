#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	sort(s.begin(),s.end(),greater<char>());
	map<char,int> mp;
	int k = INT_MIN;
	int h = INT_MAX;
	for(char x : s){
		mp[x]++;
	}
	for(char x : s){
		k = max(k,mp[x]);
		h = min(h,mp[x]);
	}
	for(char x : s){
		if(mp[x] == k) {
			cout << x << " " << mp[x] << endl;
			break;
		}
	}
	for(char x : s){
		if(mp[x] == h){
			cout << x << " " << mp[x] << endl;
			break;
		}
	}
}
