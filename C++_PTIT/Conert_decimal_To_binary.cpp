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

void binary(long long n){
	int bi[32];
	int i = 0;
	while(n > 0){
		bi[i] = n % 2;
		n = n / 2;
		i++;
	}
	for(int j = i - 1 ; j >= 0 ; j--)
		cout << bi[j];
}
// sử dụng toán tử bitwish để thực hiện
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for(int i = 31; i >= 0; i--) {
        int k = n >> i;
        if(k & 1)
            cout << "1";
        else
            cout << "0";
    }
}
string DecimalToBinary(int num)
{
    string str;
      while(num){// 11
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
      return str;
}
 
void reverse(string str)
{
  for(int i=str.size()-1 ; i>=0 ; i--)
   cout<< str[i];
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	binary(11);
	cout << endl;
	cout << decToBinary(11) << endl;
}
