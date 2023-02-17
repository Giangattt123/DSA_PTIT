#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Time complexity : O(n^2)
// O moi buoc dua phan tu co gia tri lon nhat ve cuoi day
// So sanh 2 phan tu dung canh nhau --> swap
void burbleSort(int a[] , int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]) swap(a[j],a[j+1]);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
//	burbleSort(a,n);
	burble(a,n);
	for(int i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
	
}
