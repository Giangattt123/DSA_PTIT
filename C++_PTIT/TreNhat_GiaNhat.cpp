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

struct person{
	string name , date;
	int d , m , y;
	void input(){
		cin >> name >> date;
		d = stoll(date.substr(0 , 2));
		m = stoll(date.substr(3 , 2));
		y = stoll(date.substr(6));
	}
};

bool cmp(person a , person b){
	if(a.y > b.y) return true;
	if(a.y == b.y){
		if(a.m > b.m) return true;
		if(a.m == b.m){
			if(a.d > b.d) return true;
		}
	}
	return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	person a[n];
	for(int i = 0 ; i < n ; i++){
		a[i].input();
	}
	sort(a , a + n , cmp);
	cout << a[0].name << endl << a[n - 1].name << endl;
}
