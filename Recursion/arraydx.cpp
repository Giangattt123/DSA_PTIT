#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool dx(int a[] , int l , int r){
	if(l > r) return true;
	if(a[l] != a[r]) return false;
	else 
		return dx(a,l+1,r-1);
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	if(dx(a,0,n-1)) cout <<"YES";
	else cout << "NO";
}
