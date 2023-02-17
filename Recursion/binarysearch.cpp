#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// mang nay no dang bi giam dan
bool bs2(int a[] , int l , int r , int x){
	if(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x) return true;
		else if(a[mid] < x) return bs2(a,mid+1,r,x);
		else return bs2(a,l,mid-1,x);
	}
	else{ //l > r
		return false;
	}
}
int main(){
	int n , x;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	cin >> x;
	if(bs2(a,0,n-1,x)) cout << "1";
	else cout << "0";
}
