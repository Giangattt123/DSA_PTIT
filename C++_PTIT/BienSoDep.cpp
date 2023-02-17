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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		char b[100]; 
		b[0]=a[5];b[1]=a[6];b[2]=a[7];b[3]=a[9];b[4]=a[10]; 
		int flag = 1; 
		for(int i = 0 ; i < 5 ; i++){ 
			if(b[i] !='6' && b[i]!='8'){ 
				flag = 0; 
				break; 
			} 
		} 
		if(b[0] < b[1] && b[1] < b[2] && b[2]< b[3] && b[3]<b[4]) 
			cout << "YES" <<endl; 
		else if(b[0] == b[1] && b[1] == b[2] && b[2] == b[3] && b[3] == b[4]) 
			cout << "YES" <<endl; 
		else if(b[0] == b[1] && b[1] == b[2] && b[3] == b[4]) 
			cout << "YES" <<endl; 
		else if(flag == 1) 
			cout << "YES" << endl; 
		else cout<<"NO"<<endl; 
	}
}
