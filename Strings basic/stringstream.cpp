#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
// #define mp make_pair
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	getline(cin ,s);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		cout << tmp << endl;
	}
	string a[] = {"28tech" , "dev" , "dsa" , "c++" , "python"};
	sort(a,a+5);
	for(auto x : a){ // auto = string
		cout << x << " " ;
	}
	cout << endl;
	vector<string> v = {"28tech" , "dev" , "dsa" , "c++" , "python"};
	sort(v.begin(),v.end(),greater<string>());
	for(string x : v) cout << x << " ";
	v.push_back("javascript");
	for(string x : v) cout << x << " ";
	cout << endl;
	// Lọc ra số lượng từ khác nhau trong mảng
	cout << "Loc ra cac phan tu khac nhau trong mang: " << endl;
	string b[] = {"28tech", "dev", "dsa", "c++", "python", "c++", "dev", "Python"};
	set<string> se;
	for(string x : b){
		se.insert(x);
	}
	cout << se.size() << endl;
	for(string x : se){
		cout << x << " ";
	}
	cout << endl;
	// Đếm số lần xuất hiện các từ trong mảng
	cout << "Dem so lan xuat hien cac tu trong mang: " << endl;
	map< string , int> mp;
	for(string x:b){
		mp[x]++;
	}
	for(auto it : mp){w
		cout << it.first << " " << it.second << endl;
	}
	string a = "hello phung duc giang";
	a.insert(a.size() , " dep zai");
	cout << a << endl;
	a.erase(0,6);
	cout << a << endl;
	string b = "duc giang it";
	if(a.find(b)){
		cout << a.find(b) << endl;
	}
	else{
		cout << a.find(b) << endl;
	}
}
