#include <bits/stdc++.h>
using namespace std;

int n, k, cnt;
int a[100], temp[100];
bool stop;

void checked() {
    cnt++;
    for (int i = 1; i <= k; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) checked();
        else Try(i + 1);
    }
}

void solve(){
    cnt = 0; stop = false;
    cin >> n >> k;
    for(int i = 1; i <= k; ++i) {
        cin >> temp[i];
    }
    Try(1);
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t = 1; 
	cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }
}
