#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Ham tinh tong cac phan tu trong mang
int tong(int a[] , int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	return sum;
}

void doubling1(int n){ // pass by value
	n*=2;
}
void doubling2(int &n){ // pass by references
	n*=2;
}
void doubling3(int a[],int n){
	for(int i=0;i<n;i++){
		a[i] *= 2;
	}
}
int main(){
//	int a[10] = {1,3,2,5,4};
////	for(int x : a){
////		x*=2;
////		cout << x << " ";
////	}
//	cout << endl;
//	for(int &x : a){
//		x*=2;
//	}
//	for(int x:a){
//		cout << x << " ";
//	}
	int n;
	cin >> n;
	int a[n];
	int x = 10;
	doubling1(x);
	cout << x << endl;
	int y = 10;
	doubling2(y);
	cout << y << endl;
	for(int i=0;i<n;i++) cin >> a[i];
	doubling3(a,n);
	for(int i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
//	for(int &x : a) cin >> x;
//	for(int x : a) cout << x << " ";
	// Gan tat ca ca gia tri cua mang =0;
//	for(int i=0;i<n;i++) a[i]=0;
	// dung ham memset
	memset(a,0,sizeof(a));// memset chi gan dc 0 va -1
	for(int i=0;i<n;i++) cout << a[i] << " ";
	
}
