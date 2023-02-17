#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string msv, name, date , lop;
    float gpa;
};

void nhapThongTinSV(SinhVien &a) {
    a.msv = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.lop >> a.date >> a.gpa;
   	if(a.date[2] == '/') a.date.insert(3 , "0");
	if(a.date[4] == '/') a.date.insert(0,"0");
	else{
		a.date.insert(0,"0");
		a.date.insert(3,"0");
	}  
}

void inThongTinSV(SinhVien a) {
    cout << a.msv << " " << a.name << " " << a.lop << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
