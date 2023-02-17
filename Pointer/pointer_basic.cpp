#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

// Truyền tham chiếu thông qua con trỏ
// Khi gọi hàm có tham số là con trỏ , truyền địa chỉ của biến vào làm đối số
void change( int *n ){
	*n += 100;
}
// Hoán vị giá trị của 2 phần tử 
void hoanvi(int *a , int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a = 100;
	cout << "Address of a is : " << &a << endl;
	int *ptr; // con trỏ kiểu null
	ptr = &a;// cho ptr quản lí biến a 
	cout << *ptr << endl; // giải tham chiếu truy cập a thông qua ptr
	*ptr = 500; // toán tử giải tham chiếu
	cout << "Value a change after is : " << a << endl;
	int b = 100;
	change(&b);
	cout << "Value of b is : " << b << endl;
	int c = 200 , d = 300;
	hoanvi(&c,&d);
	cout << "Value C is : " << c << " " << "Value d is : " <<  " " << d  << endl;
}