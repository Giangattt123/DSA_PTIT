#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool even(int a[] , int n){
	if(n <= 1) return true;
	else{
		if(a[n-1] <= a[n-2]) return false;
		else return even(a,n-1);
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	if(even(a,n)) cout << "YES";
	else cout << "NO";
}
