#include<bits/stdc++.h>
#include<vector> // Syntax: vector<data_type> name_vector; 
#include<iomanip> // fixed << setprecision(k)
using namespace std;
using ll = long long;
int main(){
// Khai bao 1 vector
	// Khai bao vs cac phan tu cho truoc
//		vector<int> v = {1 , 3 , 3 , 4 , 5};
	// Khai bao 1 vector vs n phan tu
//		vector<int> v (n);
	// Khai bao 1 vector co n phan tu co gia tri la val
//		vector<int> v (n,val);
	// Khai bao 1 vector tu mang a[] co n phan tu hoac tu 1 vector khac
//		vector<int> v (a,a+n);
//		vector<int> v(a.begin(),a.end());
	vector<int> v; // khai bao vector rong
	// push.back()  -> day them 1 phan tu vao cuoi , kich thuoc cua v cx rong ra
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	v.push_back(400);
	// Xoa 1 phan tu cuoi mang --> pop_back();
	v.pop_back();
	// In ra cac phan tu cua 1 vector
//	for(int x : v){
//		cout << x << " ";--> For Each
//	}
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// size() --> kich thuoc cua 1 vector
	cout << v.size() << endl;
	// Kiem tra 1 vector v co rong hay khong --> empty(): tra ve true neu vector rong , nguoc lai-> false
	if(v.empty()) cout << "Rong\n";
	else cout << "Khong rong!\n";
	// Xoa tat ca cac phan tu cua vector --> clear()
	v.clear();
	cout << v.size() << endl;
	
	
}
