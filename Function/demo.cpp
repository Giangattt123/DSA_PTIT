#include<bits/stdc++.h>
#include<algorithm>
#define endl "\n";
using namespace std;
using ll = long long;//--> c++ 11 ->
typedef long long ll;
void hello(){
	cout<<"xin chao";
}
void printfNumber(int a){
	cout<<a;
}
int max_val(int , int); // function prototype: khai bao ham nguyen mau
int max_val(int a , int b){
	if(a>b) return a;
	else return b;
}
int tong(int a , int b , int c){
	return a+b+c;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a = 4 , b = 5 , c = 6;
	cout<<max_val(a,b)<<endl;
	int n;
	cout<<"Nhap vao gia tri cua n:"<<"\n";
	cin>>n;
	cout<<"In ra gia tri cua n:"<<"\n";
	printfNumber(n);
	cout<<endl;
	/*
	Khi function call printfNumber --> a: argument(doi so) or real parameter(tham so thuc su)
	printfNumber(int a): a:formal parameter(tham so hinh thuc)
	*/
	int x =100,y=200,z=300;
	cout<<max(max(x,y),max(y,z));
}

