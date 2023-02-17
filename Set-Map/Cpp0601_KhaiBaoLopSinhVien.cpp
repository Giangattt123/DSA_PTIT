#include <bits/stdc++.h>
#define a() a;
using namespace std;

class SinhVien {
public:
    string msv, name , lop, date;
    float gpa;
    SinhVien() {};
};

void nhap(SinhVien &a) {
    a.msv = "B20DCCN001";
    getline(cin, a.name);
    a.name = "Nguyen Van A";
    cin >> a.lop >> a.date >> a.gpa;
    if(a.date[1] == '/') a.date = '0' + a.date;
	if(a.date[4] == '/') a.date.insert(3,"0");
}

void in(SinhVien a) {
    cout << a.msv << " " << a.name << " " << a.lop << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}

