#include <iostream>
using namespace std;

class PhanSo{
	private:	
		int tu;
		int mau;
		friend void CongPS(PhanSo p1, PhanSo p2);
	public:
//		PhanSo(){
//			tu=1, mau=1;
//		}
		void NhapPS(){
				cout<<"Nhap tu so = "; cin>>tu;
				cout<<"Nhap mau so = "; cin>>mau;
		}
		void InPS();
		void Cong(PhanSo);
//	friend void CongPS(PhanSo p1, PhanSo p2);
};

//void PhanSo::NhapPS(){
//	cout<<"Nhap tu so = "; cin>>tu;
//	cout<<"Nhap mau so = "; cin>>mau;
//}
void PhanSo::InPS(){
	cout<<"Phan so vua nhap ("<<tu<< "/"<< mau <<")";
}
void PhanSo::Cong(PhanSo p1)
{
	PhanSo p;
	p.tu=tu*p1.mau+p1.tu*mau;
	p.mau=mau*p1.mau;
	cout<<"\nTong 2 phan so dung phuong thuc:"<<p.tu<<"/"<<p.mau;
}
void CongPS(PhanSo p1, PhanSo p2){
	PhanSo p;
	p.tu=p2.tu*p1.mau+p1.tu*p2.mau;
	p.mau=p2.mau*p1.mau;
	cout<<"\nTong 2 phan so dung ham ban:"<<p.tu<<"/"<<p.mau;
}
int main(){
	PhanSo p1,p2,p;
	p1.NhapPS();
	p1.InPS();
	cout<<"\n";
	p2.NhapPS();
	p2.InPS();
	CongPS(p1,p2);
	p1.Cong(p2);
	
	return 0;
}
