#include<bits/stdc++.h>
#include<algorithm>
#define endl "\n";
using namespace std;
using ll = long long;
typedef int songuyen;
/*
Nap chong ham(function overloading) tinh nang cua C++ cho phep cac ham co cung ten nhung
khac nhau o kieu du lieu cua tham so , kieu tra ve .
Khi function call tuy vao typedate cua tham so ma ham thich hop se dc goi
*/
int findMax(int a , int b){
	if(a>b) return a;
	else return b;
}
float findMax(float a , float b){
	if(a>b) return a;
	else return  b;
}
int main(){
	int x = 100, y = 200;
	cout<<findMax(x,y)<<endl;
	float a = 100.23 , b = 200.45;
	cout<<findMax(a,b)<<endl;
}
