#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// dynamic_allocation : cấp phát động
// stack : cấp phát tĩnh
// heap : phụ thuộc vào cấp phát của ram
int main(){
	// allocation : new
	int *a = new int [1000000];
	cin >> a[0] >> a[1];
	cout << a[0] << " " << a[1];
	// remove : delete
	delete []a;
}
