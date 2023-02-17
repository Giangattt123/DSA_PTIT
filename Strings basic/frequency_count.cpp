#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Ma ASCII : 0->255
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// C1 : mảng đánh dấu
	cout << "Dem tan xuat cua xau su dung mang danh dau:" << endl;
	string s = "abcdabcdzzzza";
	int cnt[256] = {0};
	for(char x:s){
		cnt[x]++;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]){
			cout << (char)i << " " << cnt[i] << endl;
		}
	}
	// C2 : map
	cout << "Dem tan xuat cua xau su dung map thong qua key va value:" << endl;
	map<char , int > mp;
	for(auto x:s){
		mp[x]++;
	}
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}

}