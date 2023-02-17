#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//void Try(int n){
//	if(n == 0) return;
//	cout << "n = " << n << endl;
//	Try(n - 1);
//	cout << "Quay lai o n = " << n << endl;
//}
// Quay lui(Backtracking)
// X = {x1,x2,x3,...xn}

/* Mã giả của thuật toán quay lui
	for(j = khả năng 1 ; j <= khả năng m ; j++){
		<ghi nhận kết quả>
		X[i] = j;
		if(i == n) inkq();
		else Try(i + 1);
		<bỏ ghi nhận kết quả>
	}
*/

int n , x[100];
void inkq(){
	for(int i = 1 ; i <= n ; i++) cout << x[i];
	cout << endl;
}
void Try(int i){
	for(int j = 0 ; j <= 1 ; j++){
		x[i] = j;
		if(i == n) inkq();
		else Try(i + 1);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Try(1);
}