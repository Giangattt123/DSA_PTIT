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
    int n ; cin >> n;
    long long a[n];
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    long long res = 0;
    stack<int>st;
    int i = 0;
    while(i < n){
        if(st.empty()|| a[i] >= a[st.top()]){
            st.push(i);
            ++i;
        }else{
            int tmp = st.top();
            st.pop();
            if(st.empty())
                res = max(res , a[tmp] * i);
            else
                res = max(res , a[tmp] * (i - st.top() - 1));
        }
    }
    while(!st.empty()){
        int tmp = st.top();
        st.pop();
        if(st.empty())
            res = max(res , a[tmp] * i);
        else
            res = max(res , a[tmp] * (i - st.top() - 1));
    }
    cout << res;
}


