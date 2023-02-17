#include<bits/stdc++.h> 
using namespace std; 
class SinhVien{ 
	private: 
		string msv, name, lop, date; 
		float gpa; 
	public: 
		SinhVien(); 
		void nhap(); 
		void xuat(); }
; 
SinhVien::SinhVien(){ 
	this -> msv = "B20DCCN001"; 
	this-> name = ""; 
	this-> lop = ""; 
	this-> date = ""; 
	this->gpa = 0; 
} 
void SinhVien::nhap(){ 
	getline(cin, name); 
	getline(cin, lop); 
	getline(cin, date); 
	cin >> gpa; 
	if(date[1] == '/') date = '0' + date;
	if(date[4] == '/') date.insert(3,"0");
}
void SinhVien::xuat(){ 
	cout<< msv << " " << name << " " << lop << " " << date << " " << fixed << setprecision(2) << gpa; 
} 
int main(){ 
	SinhVien a; 
	a.nhap(); 
	a.xuat(); 
	return 0; 
}