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
// Dãy số 2
/* Ví dụ n = 5 , nhập vào các phần tử của mảng lần lượt là 1 2 3 4 5
=> Test mẫu
[48]
[20, 28]
[8, 12, 16]     
[3, 5, 7, 9]
[1, 2, 3, 4, 5]
Input : 5 => 1 2 3 4 5
Output : => [48] [20 28] [8 12 16] [3 5 7 9] [1 2 3 4 5]
*/
int n;
vector<int> a;
vector<int> b;
vector<vector<int>> ans;
void Try(int i) {
    ans.push_back(a);
    if (i == 1) return;
    for (int j = 0; j < i - 1; ++j) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    b.clear();
    Try(i - 1);
}
void solve() {
    cin >> n;
    a.resize(n);
    ans.clear();
    for (int &i : a) cin >> i;
    Try(n);
    reverse(ans.begin(), ans.end());
    for (vector<int> i : ans) {
        cout << "[";
        for (int j = 0; j < i.size(); ++j) {
            cout << i[j];
            if (j != i.size() - 1) cout << " ";
        }
        cout << "] ";
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
