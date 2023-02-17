#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
//	// & operator 
//	unsigned int a = 20 , b = 30;
//	unsigned int c = a & b;
//	cout << c << endl;
//	// tuong tu vs |, ~ , ^
//	unsigned int d = ~a;
//	cout << d << endl;
//	
//	unsigned int x = 37 , y = 22;
//	unsigned int e = x ^ y;
//	cout << e << endl;
	
	int a[] = {1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4};
	int ans = 0;
	for(int i = 0; i < 11; i++)
		ans ^= a[i];
		cout << ans << endl;

	
	int b[] = {1,1,2,2,2,3,3,3,3};
	int res = 0;
	for(int i=0;i<9;i++){
		res = res ^ b[i];
	}
	cout << res << endl;
	
	// kiem tra so le
	int x = 15;
	if(x & 1) cout << "Le";
	else cout << "chan";
}
