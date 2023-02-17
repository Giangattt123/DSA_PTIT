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
const int max = 100;
//void inMatrix(int a[][] , int n){
//	int i = 0 , j = 0;
//	bool up = true;
//	for(int k = 0 ; k < n * n){
//		if(up){
//			for( ; i >= 0 && j < n ; j++ ; i--){
//				cout << a[i][j] << " ";
//				k++;
//			}
//			if(i < 0 && j <= n - 1) i =0;
//			if(j == n){
//				i = i + 2;
//				j--;
//			}
//		}
//		else{
//			for( ; i >= 0 && i < n ; i++){
//				cout << a[i][j] << " ";
//				k++;
//			}
//			if(j < 0 && j <= n - 1) j = 0;
//			if(i == n){
//				j = j + 2;
//				i--;
//			}
//		}
//		up = !up;
//	}
//}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++)
				cin >> a[i][j];
		}
			int i = 0 , j = 0;
		bool up = true;
		for(int k = 0 ; k < n * n ;){
			if(up){
				for( ; i >= 0 && j < n ; j++ , i--){
					cout << a[i][j] << " ";
					k++;
				}
				if(i < 0 && j <= n - 1) i =0;
				if(j == n){
					i = i + 2;
					j--;
				}
			}
			else{
				for( ; i >= 0 && i < n ; i++){
					cout << a[i][j] << " ";
					k++;
				}
				if(j < 0 && j <= n - 1) j = 0;
				if(i == n){
					j = j + 2;
					i--;
				}
			}
			up = !up;
		}
	}
}
