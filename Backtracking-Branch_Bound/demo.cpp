#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    if (i < n && a[i + 1][j] == 1)
        Try(i + 1, j, s + 'D');
    if (j < n && a[i][j + 1] == 1)
        Try(i, j + 1, s + 'R');
}

void solve() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << "-1\n";
        return;
    }
    Try(1, 1, "");

    if (v.empty()) {
        cout << "-1\n";
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    int t; 
	cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}
