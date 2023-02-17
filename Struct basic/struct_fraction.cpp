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

struct PhanSo{
    ll tu , mau;
    void toigian(){
        ll uc = gcd(abs(tu) , abs(mau));
        tu /= uc;
        mau /= uc;
    }
    void nhap(){
        cin >> tu >> mau;
    }
    void in(){
        if(tu * mau < 0){
            mau = abs(mau);
            if(tu > 0) tu *= -1;
        }
        cout << tu << "/" << mau << endl;
    }
};

PhanSo tong(PhanSo a,PhanSo b){
    ll mc = lcm(a.mau,b.mau);
    PhanSo c;
    c.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    c.mau = mc;
    c.toigian();
    return c;
}

PhanSo hieu(PhanSo a,PhanSo b){
    ll mc = lcm(a.mau,b.mau);
    PhanSo c;
    c.tu = mc / a.mau * a.tu - mc / b.mau * b.tu;
    c.mau = mc;
    c.toigian();
    return c;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	PhanSo a , b;
    a.nhap();
    b.nhap();
    a.toigian();
    b.toigian();
    a.in();
    b.in();
    PhanSo sum = tong(a,b);
    PhanSo diff = hieu(a,b);
    sum.in();
    diff.in();
	
}
