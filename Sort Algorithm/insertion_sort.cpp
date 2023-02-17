#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Time complexity : O(n^2)
// O moi buoc no se co gang chen phan tu thu i vao trong doan 0 --> i-1
void insertionSort(int a[], int n){
	for(int i = 1; i < n; i++){ 
		// chen phan tu a[i] vao 0-->n-1
		int pos = i - 1, x = a[i]; 
		// di tim vi tri dau tien ma no < x de chen vao
		while(pos >= 0 && a[pos] >= x){
			// dich phan tu sang ben phai
			a[pos + 1] = a[pos];
			--pos;
		}
		// tim dc a[pos] la phan tu dau tien nho hon x
		a[pos + 1] = x;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	insertionSort(a,n);
	for(int i=0;i<n;i++) cout << a[i] << " ";
}
