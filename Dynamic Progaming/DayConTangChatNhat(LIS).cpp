#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
// tìm dãy con tăng dài nhất (không nhất thiết phải tăng chặt)
// F[i] : dãy con dài nhất kết thúc ở chỉ số i
/* Sample input
14
128 104 53 876 660 961 754 775 290 231 224 915 392 994 -> Ans : 6
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int f[n];
	for(int i = 0 ; i < n ; i++){
		f[i] = 1;
		for(int j = 0 ; j < i ; j++){
			if(a[j] < a[i])
				f[i] = max(f[i] , f[j] + 1);
		}
	}
	cout << *max_element(f , f + n) << endl;
}

//	int a[6] = {1 , 10 , 8 , 12 , 4 , 6};
//	cout << max_element(a , a + 6) << endl; dia chi cua phan tu ma co gia tri lon nhat
//	cout << *max_element(a , a + 6) << endl; // toans tu giai tham chieu
//	cout << min_element(a , a + 6) << " " << *min_element(a , a + 6) << endl;
