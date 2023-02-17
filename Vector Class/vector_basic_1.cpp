#include<bits/stdc++.h>
#include<vector>
using ll = long long;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// Khai bao va xuat ra 1 vector
//	int n;
//	cin >> n;
//	vector<int> v;
//	for(int i=0;i<n;i++){
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	for(int i=0;i<n;i++){
//		cout << v[i] << " ";
//	}
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<v.size();i++){
		cin >> v[i];
	}
//	for(int i=0;i<v.size();i++){
//		cout << v[i] << " ";
//	}
	// Vector Iteratol :: --> toan tu pham vi
	for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++){
		cout << *it << ' ' ; // * : toan tu giai tham chieu
	} 
	cout << endl;
	vector<int>::iterator x = v.begin();
	cout << *x << endl;
	vector<int>::iterator y = v.begin() + 2;
	cout << *y << endl;
	// Thay vector<int>::iterator =  auto --> nhu nhau
	auto z = v.end() - 1;
	cout << *z << endl;
//	for(auto it = v.begin() ; it != v.end() ; it++){
//		cout << *it << ' ' ; // * : toan tu giai tham chieu  ---> chuan C++ 11 tro len
//	} 
	/*  Insert : Them 1 phan tu vao vi tri bat ki trong vector thong qua iterator
	Syntax insert(vi tri iterator , value)
		Erase : Xoa 1 phan tu thong qua iterator
		Resize : tahy doi kich thuoc cua 1 vector
		Assign : gan cac phan tu trong vector vs cung 1 gia tri
	*/
	vector<int> a = {1 , 2 , 3 , 4 ,5};
	a.insert(a.begin() + 2 , 100);
	a.erase(a.begin() + 3);
	a.resize(3);
	a.assign(3,100);
	for(auto x : a){
		cout << x << " ";
	}
	cout << endl;
	cout << a.front() << " " << a.back();
	
}
