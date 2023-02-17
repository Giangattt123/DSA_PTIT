#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
// Syntax
struct struct_name{
	// truong du lieu
	// data
};
struct date{
	int ngay , thang , nam;
};

struct hour {
	int gio , phut , giay;
};
// nested structure : cau truc long nhau
struct Ve{
	date Ngayxem;
	hour Gioxem;
	char tenPhim[100];
	double giaVe;
};
struct SinhVien {
	char ma[20];
	char ten[50];
	double gpa;
	char lop[20];
};
struct HocSinh{
	char ten[100];
	double diem;
};
typedef SinhVien SV; // typedef tao bi danh (alias) 
typedef HocSinh HS;
// Nhap thong tin va tra ve 1 struct 
	// Cach 1
HS nhap1(){
	HS x;
	gets(x.ten);
	scanf("%lf",&x.diem); // double : %lf
	return x;
}
	// Cach 2
HS nhap2(HS *a){
	gets(a->ten);
	scanf("%lf",&a->diem);
}
void in(HS a){
	printf("%s %.2lf\n",a.ten,a.diem);
}
main(){
////	struct SinhVien a;
//	SV a;
//	// truy cap den cac data --> dot operator: .
//	scanf("%s",a.ma);
//	getchar();// doc enter --> tranh troi command gets
//	gets(a.ten);
//	scanf("%lf %s",&a.gpa,a.lop);
//	printf("%s %s %0.2f %s\n",a.ma,a.ten,a.gpa,a.lop);
//	// assignment struct 
//	SV b = a;
//	printf("%s %s %0.2f %s",b.ma,b.ten,b.gpa,b.lop);	
//	struct Ve v;
//	v.giaVe;
//	v.tenPhim;
//	v.Ngayxem.ngay;
//	v.Ngayxem.nam;
//	v.Ngayxem.thang;
//	v.Gioxem.gio;

	HS a;
	nhap2(&a);
	in(a);
}


