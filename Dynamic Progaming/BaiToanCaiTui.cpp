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
/*
 F[i][j] : giá trị sử dụng lớn nhất của cái túi đạt đc khi lựa chọn  một số trong i 
 đồ vật đầu tiên( xét đến gói hàng thứ i ) và trọng lượng khi ấy là j
 Ans : F[n][v]
 Đồ vật thứ i : 
 	- Không lựa chọn : F[i][j] = F[i - 1][j]
 	- Lựa chọn : trọng lượng w[i] và giá trị v[i] 
 	F[i][j] = max(F[i][j] , F[i][j - w[i]) + v[i])
 	
Bài toán cơ sở F[0][j] = 0 -> do ta không lựa chọn đồ vật nào
*/
	
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , V;
	cin >> n >> V;
	int w[n + 1] , v[n + 1];
	for(int i = 1 ; i <= n ; i++) cin >> w[i];
	for(int i = 1 ; i <= n ; i++) cin >> v[i];
	int F[n + 1][V + 1];
	memset(F , false , sizeof(F));
	for(int i = 1 ; i <= n ; i++){
		for(int j = 0 ; j <= V ; j++){
			F[i][j] = F[i - 1][j]; 
			if(j >= w[i])
				F[i][j] = max(F[i][j] , F[i - 1][j - w[i]] + v[i]);
		}
	}
	cout << F[n][V] << endl;
}
