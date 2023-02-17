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

ll sum_digit(ll n){
    ll sum = 0;
    while(n){
        ll k = n % 10;
        sum += k;
        n/=10;
    }
    return sum;
}

ll pt(ll n){
    ll sum1 = 0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                sum1+=sum_digit(i);
                n/=i;
            }
        }
    }
    if(n!=1) sum1+=sum_digit(n);
    return sum1;
}

ll check_Prime(ll n){
    if(n<2) return 0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
	    cin >> n;
	    if(check_Prime(n)) cout<<"NO"<<endl;
	    else{
	        if(pt(n)==sum_digit(n)) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}
}
