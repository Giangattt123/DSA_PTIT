#include <bits/stdc++.h>
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

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

bool comp(int a, int b)
{
 return (a < b);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' };
 
 // Finding the maximum value between the first and the
 // fourth element
 
 	int* i1; // biến con trỏ có kiểu dữ liệu là int lưu địa chỉ của biến khác
 	i1 = std::max_element(v, v + 4);
 
 	cout << char(*i1) << "\n";
 	int x[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 };
 	// max 2 - > 8 index
 	int *it2;
 	it2 = std::max_element(x + 2 , x + 9 , comp);
 	cout << *it2 << endl;
 	cout << *std::max_element(x + 2 , x + 9) << endl;
 	cout << sizeof(x) << " " <<  sizeof(int)<< " " << sizeof(x)/sizeof(int) << endl;
}
