#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Time complexity : O(NLogN)
int partition(int a[] , int l , int r){
	int pivot = a[r];
	int i = l - 1;
	for(int j=l;j<r;j++){
		if(a[j] <= pivot){
			++i;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i] , a[r]);
	return i;
}
void quicksort(int a[], int l, int r){
	if(l < r){
		int p = partition(a, l, r);
		quicksort(a, l, p - 1);
		quicksort(a, p + 1, r);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++) cout << a[i] << " ";
}
