#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	set<int> se;
	se.insert(1);
	se.insert(4);
	se.insert(3);
	se.insert(1);
	se.insert(4);
	se.insert(2);
	cout << "Kich thuoc cua set sau khi chen la: " << se.size() << endl;
	// se.clear();
	if(se.empty()) cout << "Set rong" << endl;
	else cout << "Set khong rong" << "\n";
	cout << "Duyet set bang for each: ";
	for(auto x : se) cout << x << " ";
	cout << endl;
	for(set<int>::iterator it = se.begin() ; it != se.end() ; ++it){
		cout << *it << " ";
	}
	cout << endl;
	for(auto it = se.begin() ; it != se.end() ; ++it){
		cout  << *it << " ";
	}
	cout << endl;
	cout << *se.begin() << endl ;
	cout << *se.rbegin() << endl;
	auto IT = --se.end();
	--IT;
	cout << *IT << endl;
	if(se.find(2) != se.end()) cout << "Tim thay" << endl;
	else cout << "Khong tim thay" << endl;
	if(se.count(1) !=0) cout << "Tim thay" << endl;
	else cout << "Khong tim thay" << endl;
	auto xoa = se.find(1);
	se.erase(xoa);
	for(auto x : se) cout << x << " ";
	cout << endl;
	cout << "Tra loi cac quiz" << endl;
	// Quiz 1
	int a[7] = {5, 5, 1, 2, 3, 4, 5};
	set<int> b(a, a + 7);
	auto it = b.find(7);
	--it;
	cout << "Dap an quiz 1 la:" << *it << endl;
	// Quiz 2 
	set<int> c(a, a + 7);
	auto it1 = c.find(3);
	--it1;
	c.erase(it1);
	for(auto x : c) cout << x << " " ;
	cout << endl;
	//Quiz 6
	for(auto it2 = b.rbegin(); it2 != b.rend(); ++it2){
		cout << *it2 << ' ';
	}
	
}