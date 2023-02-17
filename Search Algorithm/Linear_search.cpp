#include<bits/stdc++.h>
using namespace std;
bool ls(int a[n] , int n , int x){  // O(N)
	for(int i=0;i<n;i++){
		if(x == a[i]) return true;
	}
	return false;
}
int main(){
	int n , x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	if(ls(a,n,x)) cout << "1";
	else cout << "0";
}

