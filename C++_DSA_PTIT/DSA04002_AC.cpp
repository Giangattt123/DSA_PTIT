#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MOD = 1e9 + 7;

long long powMod(long long n, long long k) {
    if (k == 0) return 1;
    long long x = powMod(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

long long reverse(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

void solve() {
    long long n; cin >> n;
    long long r = reverse(n);
    cout << powMod(n, r) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t; 
	cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}