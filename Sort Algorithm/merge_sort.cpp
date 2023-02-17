#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Thao tac Merge
// Time complexity : O(NLogN)
void merge(int a[] , int l , int m , int r){
	int n1 = m - l + 1 , n2 = r - m;
	int x[n1] , y[n2];
	for(int i=0;i<n1;i++){
		x[i] = a[l + i];
	}
	for(int i=0;i<n2;i++){
		y[i] = a[m + 1 + i];
	}
	int i = 0, j = 0 , index = l;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]){
			a[index] = x[i];
			++index;
			++i;
		}
		else{
			a[index] = y[j];
			++index;
			++j;
		}
	}
	while(i < n1){
		a[index] = x[i];
		++index;
		++i;
	}
	while(j < n2){
		a[index] = y[j];
		++index;
		++j;
	}
}

void mergeSort(int a[] , int l , int r){
	if(l < r){
		int m =  (l + r)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[] = {2,3,4,8,9,1,7,8,12};
//	merge(a,1,4,8);
//	for(int i=0;i<9;i++) cout << a[i] << " ";
	mergeSort(a,0,8);
	for(int x:a){
		cout << x << " ";
	}
}

	

