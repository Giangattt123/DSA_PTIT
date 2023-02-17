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
Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là ‘A’, ‘E’, còn lại là phụ âm. 
Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến chữ cái c (‘D’ <= c <= ‘H’) 
sao cho mỗi chữ cái được sử dụng đúng một lần 
và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm. 
Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.
*/

char X[100] , n , c;
bool used[1000];
// vowel : nguyên âm
bool isvowel(char c){ 
	return c == 'A' || c == 'E';
}
bool check(){
	for(int i = 2 ; i <= n - 1 ; i++){
		if(!isvowel(X[i - 1]) && !isvowel(X[i + 1]) && isvowel(X[i]))
			return false;
	}
	return true;
}

void inkq(){
	for(int i = 1 ; i <= n ; i++){
		cout << X[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j = 'A' ; j <= c ; j++){
		if(used[j] == false){
			X[i] = j;
			used[j] = true;
			if(i == n){	
				if(check())
					inkq();
			}
			else 
				Try(i + 1);
			used[j] = false;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
}
