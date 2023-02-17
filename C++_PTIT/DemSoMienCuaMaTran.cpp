#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100][100];
const int X[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int Y[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void BFS(int row, int col){
    for (int i = 0; i < 8; ++i) {
        int x = row + X[i];
        int y = col + Y[i];
        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == 1) {
            a[x][y] = 0;
            BFS(x, y);
        }
    }
}

void solve(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 1) {
                res++;
                BFS(i, j);
            }
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--){
       solve();
    }
    return 0;
}