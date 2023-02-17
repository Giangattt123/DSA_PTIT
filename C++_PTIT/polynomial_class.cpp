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

class DaThuc{
	private : 
		int degree; // b?c c?a da th?c
		int *coeffArr; // m?ng ch?a h? s? da th?c
	public :
		DaThuc(){};
		DaThuc(int n){
			degree = n;
			coeffArr = new int [degree];
		}
		~DaThuc(){
			degree = 0;
			delete coeffArr;
		}
		friend istream & operator >> (istream & in , DaThuc &a){
			cin >> a.degree;
			a.coeffArr = new int[a.degree + 1];
			for(int i = 0 ; i <= a.degree ; i++){
				cout << "a[" << i << "] = ";
				in >> a.degree[i];
				return in;
			}
		}
		friend ostream & operator << (ostream & out , DaThuc a){
			for(int i = 0 ; i <= a.degree ; i++){
				cout << a.a[i] << "x^" << i;
				if(i != a.degree) cout << " + ";
			}
			return out;
		}
		DaThuc operator + (DaThuc &a){
			int degreemax = (degree > a.degree) ? degree : a.degree;
			int degreemin = (degree < a.degree) ? degree : a.degree;
			DaThuc total(degreemax);
			for(int i = degreemax ; i > degreemin ; i--)
				total.a[i] = (degree == degreemax) ? a[i] : a.a[i];
			for(int i = 0 ; i <= degreemin ; i++) total.a[i] = a[i] + a.a[i];
			return total;
		}
		DaThuc operator - (DaThuc &a){
			int degreemax = (degree > a.degree) ? degree : a.degree;
		    int degreemin = (degree < a.degree) ? degree : a.degree;
		    DT subtract(degreemax);
		    for(int i = 0 ; i <= degreemin ; i++) subtract.a[i] = a[i] - a.a[i];
		    for(int i = degreemax ; i > degreemin ; i--)
				subtract.a[i] = (degree == degreemax) ? a[i] : a.a[i];
		    return subtract;
		}
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	DaThuc a , b;
	cin >> a;
	cin >> b;
	DT sum = a + b;
	cout << sum << endl;
	DT sub = a - b;
	cout << sub << endl;
}