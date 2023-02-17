#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int firstPos(int a[] , int n , int x){
	int res = -1,  left = 0 , right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;
			right = mid - 1;
		}
		else if(a[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return res;
}

int lastPos(int a[] , int n , int x){
	int res = -1 , left = 0 , right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;
			left = mid + 1;
		}
		else if(a[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return res;
}

int firstPos1(int a[] , int n , int x){
	int res = -1 , left  = 0 , right = n -1 ;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] >= x){
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	return res;
}

int lastPos1(int a[] , int n , int x){
	int res = -1 , left  = 0 , right = n -1 ;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] > x){
			res = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	return res;
}
int main(){
	int n , x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int x1 = firstPos(a,n,x);
	int x2 = lastPos(a,n,x);
	int x3 = firstPos1(a,n,x);
	int x4 = lastPos1(a,n,x);
	cout << x1 << "\n" << x2 << "\n" << x3 << "\n" << x4 << "\n";
	if(x1 != -1){
		cout << x2 - x1 + 1;
	}
	else cout << "0";
	
}
