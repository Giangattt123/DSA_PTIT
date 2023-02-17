#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// cho 2 mang dc sap xep tang dan --> tron thanh 1 mang cx tang dan
// (5) 2 3 7 8 12
// (5) 1 2 4 9 10
// Merge sort: 1 2 2 3 4 7 8 9 10 12
int main(){
	int n, m;
	cin >> n >> m;
	int a[n] , b[m];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];
	int i = 0, j = 0;
	while(i<n && j<m){
		if(a[i] <= b[j]){
			cout << a[i] << " ";
			++i;
		}
		else{
			cout << b[j] << " ";
			++j;
		}
	}
	while(i<n){
	 	cout << a[i] << " ";
	 	++i;
	}
	while(j<m){
		cout << b[j] << " ";
		++j;
	}
}
