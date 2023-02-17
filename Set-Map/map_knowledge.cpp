#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<int,int> mp;
	mp.insert({1,2});
	mp.insert({1,3});
	mp.insert({2,4});
	mp.insert({3,5});
	mp.insert({2,5});
	// Syntax : map[key] = value;
	mp[5] = 10; // --> mp.insert({5,10});
	mp[2] = 100; // --> {2,4} --> {2,100};
	cout << "So luong phan tu trong map sau khi insert la: " << mp.size() << endl;
	// Duyệt map : duyệt theo thứ tự tăng dần của key
		//C1: For each , có thể thay thế pair<int,int> = auto
	cout << "Duyet map bang for each:" << endl;
		for(pair<int,int> x:mp){
			cout << x.first << " " << x.second << endl;
		}
	cout << "Duyet map tu key suy ra value:" << endl;
		for(auto it : mp){
			int key = it.first;
			cout << key << " " << mp[key] << endl;
		}
		// C2: Iterator
	cout << "Duyet map bang iterator:" << endl;
		for(map<int,int>::iterator it = mp.begin();it!=mp.end();++it){
			cout << (*it).first << " " << (*it).second << endl;
			// thay (*it).first --> it->first
		}
	// Find
		map<int , int> m;
		for(int i=1;i<=10;i++){
			m.insert({i,2*i});
		}
		if(m.find(5) != m.end()) cout << "Da tim thay" << endl;
		else cout << "Khong tim thay" << endl;
		auto it = mp.find(3);
		if(it != mp.end()) {
			mp.erase(it);
		}
		for(auto a : mp){
			cout << a.first << " " << a.second << endl;
		}

}