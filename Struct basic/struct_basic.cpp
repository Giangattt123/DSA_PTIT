#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct GV{
	string ten;
	int tuoi;
	string diachi;
	string ngaysinh;
	int luong;
};

struct SV{
	// truong du lieu
	string ten;
	string diachi;
	double gpa;
	// function in struct
	void nhap(){
		getline(cin ,ten);
		getline(cin , diachi);
		cin >> gpa;
	}
	void in(){
		cout << ten << " " << diachi << " " << gpa << endl;
	}
};
int main(){
	// dot operator
	SV x;
	// SV x{"Phung duc giang","Vinh Phuc",3.5}
	getline(cin , x.ten);
	getline(cin , x.diachi);
	cin >> x.gpa;
	cout << x.ten << " " << x.diachi << " " << x.gpa << endl; 
	// Gán truong sinh vien cho nhau
	SV y = x;
	cout << y.ten << " " << y.diachi << " " << y.gpa << endl;
	cin.ignore(); 
	SV z;
	z.nhap();
	z.in();	
}
