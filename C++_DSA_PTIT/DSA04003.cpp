#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
ll n;
//int count_sequences(int n) {
//    int dp[n+1];
//    dp[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        dp[i] = 0;
//        for (int j = 1; j <= i; j++) {
//            dp[i] += dp[i-j];
//        }
//    }
//    return dp[n];
//}
const int MOD = 123456789;
long long powmod(ll n, ll k) {
    if (k == 0) return 1;
    ll x = powmod(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

void solve(){
  	cin >> n;
    cout << powmod(2, n - 1) << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
