#include <iostream>
using namespace std;
class Circle;

class Point{
	private:	
		 float x;
		 float y;
	public:
		Point(){
			x=0, y=0;
		}
		~Point( ){
			x=0; y=0;
		}
		void InIt();
		void Print();
};
void Point::InIt(){
	cout<<"Nhap x = "; cin>>x;
	cout<<"Nhap y = "; cin>>y;
}
void Point::Print(){
	cout<<"(x,y)= ("<<x<< ","<< y <<")";
}
class Circle{
	private:
		Point A;
		float r;
	public:
		Circle():A(){
			r=0;
		}
		
		void InIt(){
			cout<<"Nhap tam va ban kinh hinh tron"<<endl;
			A.InIt();
			cout<<"Nhap ban kinh:";
			cin>>r;
		}
		void Print(){
			cout << "\nHinh tron co tam: ";
			A.Print();
			cout << "\nCo ban kinh= " << r;
		}
		
};

int main(){
	Circle c;
	c.InIt();
	c.Print();
	cout<<"\nChu vi hinh tron:"<<P_Circle(c);
	cout<<"\nDien tich hinh tron:"<<S_Circle(c);
	return 0;
}
