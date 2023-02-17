#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	// C1 : Dùng map để gải uquyeets hướng đi của bài toán
	string s;
	cin >> s;
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	} 
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	// for(map<char , int>::iterator it = mp.begin() ; it != mp.end() ; it++){
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
	cout << endl;
	for(auto x : s){
		if(mp[x] != 0){
			cout << x << " " << mp[x] << endl;
			mp[x] = 0;
		}
	}
	// C2 : dùng 1 mảng đánh dấu
	cin.ignore();
	string a;
	getline(cin,a);
	int cnt[256] = {0};
	int K = INT_MIN;
	for(char x : a){
		cnt[x]++;
	}
	for(char x : a){
		if(cnt[x] != 0){
			cout << x << " " << cnt[x] << endl;
			cnt[x] = 0;
		}
	}

}