#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n; 
	cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for(int &i : a) cin >> i;
    for(int i = 0; i < n - 1; ++i) {
        int id = i;
        for(int j = i + 1; j < n; ++j) {
            if(a[j] < a[id]) 
                id = j;
        }
        swap(a[i], a[id]);
        b.push_back(a);
    }

    for(int i = b.size() - 1; i >= 0; --i) {
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	solve();
}