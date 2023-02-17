#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int firstPos(int a[] , int n , int x){
	int left = 0 , right = n - 1 , res = -1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;
			right = mid -1;
		}
		else if(a[mid] < x){
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return res;
}

// Tim vi tri cua phan tu dau tien > x , neu ko co phan tu nao in ra -1
int lower(int a[], int n , int x){
	int res = -1 , left = 0 , right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] >= x){
			res = mid;
			right = mid - 1;
		}
		else{ // a[mid] < x
			left = mid + 1;
		}
	}
}
// Tim vi tri cuoi cung cua phan tu dau tien <= x , neu ko co phan tu nao in ra -1
int upper(int a[], int n, int x){
	int res = -1;
	int left = 0, right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
			if(a[mid] <= x){
				res = mid; // cap nhat
				//Tìm thêm dáp án tot hon
				left = mid + 1;
			}
		else{
			right = mid - 1;
		}
	}
	return res;
}

int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
//	cout << firstPos(a,n,x) << endl;
	cout << lower(a,n,x);
	
}
