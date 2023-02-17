#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int min_val = INT_MAX;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(  abs(a[i] - a[j]) < min_val) min_val = abs(a[i] - a[j]);
		}
	}
	cout << min_val;
}
