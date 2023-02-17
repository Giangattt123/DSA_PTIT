#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a[7] = {4,4,1,2,4,1,5};
	multiset<int> se;
	unordered_set<int> unset;
	// se : 1 1 2 4 4 4 5
	for(int x:a){
		se.insert(x);
	}
	for(int x:a){
		unset.insert(x);
	}
	cout << se.size() << endl; 
	for(auto x : se) cout << x << " ";
	cout << endl;
	cout << "Ham find trong multiset:" << endl;
	auto it = se.find(4);
	// Nếu tìm không thấy nó sẽ trả về iterator se.end()
	cout << *it << endl;
	--it;
	cout << *it << endl;
	cout << "Ham count trong multiset:" << endl;
	cout << se.count(4) << endl;
	cout << "Ham erase trong multiset:" << endl;
	// Xóa hết tất giá trị 4 có trong set
		// se.erase(4);
		// for(auto x : se) cout << x << " " ;
	// Nếu muốn xóa 1 thì phải thông qua iterator
	auto it1 = se.find(4);
	se.erase(it1);
	for(auto x : se) cout << x << " " ;
	cout << endl;
	cout << "Unordered_set luu linh tinh:" << endl;
	for(auto x:unset) cout << x << " ";

}