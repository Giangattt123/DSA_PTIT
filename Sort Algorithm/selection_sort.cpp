#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Time complexity : O(n^2)
// Thuc hien n-1 vong lap , o moi buoc dua phan tu nho nhat chua dc sap xep ve dau day
void selectionSort(int a[] , int n){ // tang dan
	for(int i=0;i<n-1;i++){
		int min_pos = i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min_pos]) min_pos = j;
		}
		swap(a[min_pos] , a[i]);
	}
}
void Selection(int a[] , int n){ // giam dan
	for(int i=0;i<n-1;i++){
		int max_pos = i;
		for(int j=i+1;j<n;j++){
			if(a[j] > a[max_pos]) max_pos = j;
		}
		swap(a[max_pos] , a[i]);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	selectionSort(a,n);
//	Selection(a,n);
	for(int i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
	
}
