#include<bits/stdc++.h>
using ll = long long;
using namespace std;
void right_left(int a[] , int n){
	if(n == 0) return;
	else{
		cout << a[n-1] << " ";
		right_left(a,n-1);
	}
}

void left_right(int a[] , int n){
	if(n == 0) return;
	else{
		left_right(a,n-1);
		cout << a[n-1] << " ";
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	left_right(a,n);
	cout << endl;
	right_left(a,n);
}

