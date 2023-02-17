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

struct SinhVien{
	string msv , name , class_name;
	double p1 , p2 , p3;
	
	void in(){
		cin.ignore();
		getline(cin , msv);
		getline(cin , name);
		getline(cin , class_name);
		cin >> p1 >> p2 >> p3;
	}
	void out(){
		cout << msv << " " << name << " " << class_name << " ";
		cout << fixed << setprecision(1) << p1 << " " << p2 << " " << p3 << endl;
	}
};

bool cmp(SinhVien a , SinhVien b){
	return a.name < b.name;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	SinhVien a[n];
	for(int i = 0 ; i < n ; i++)
		a[i].in();
	sort(a , a + n , cmp);
	for(int i = 0 ; i < n ; i++){
		cout << i + 1 << " ";
		a[i].out();
	}
}
