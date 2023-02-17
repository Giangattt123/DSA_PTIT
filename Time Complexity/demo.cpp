#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// code sau co do phuc tap la O(1).
// cac phep toan + , - , * , / , % hoac phep gan so sanh hay nhap xuat du lieu cin cout deu co complexity time la O(1)
int main(){
	int a = 100;
	int b = 200;
	int c = 300;
	int tong = a + b + c;
	cout << tong;
	
	// Time complexity cua vong lap bang so luong lap cua vong nhan vs code body
	int n = 1000;
	for(int i=1;i<=n;i++){ // 1000 vong lap
		// O(1) body code
	}
}
