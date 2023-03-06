#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100005;
int n, m, num = 0;
int dfn[MAXN], low[MAXN];
bool vis[MAXN], cut[MAXN];
vector<int> adj[MAXN];

void tarjan(int u, int fa) {
    dfn[u] = low[u] = ++num;
    vis[u] = true;
    int children = 0;
    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if (v == fa) continue;
        if (!vis[v]) {
            tarjan(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] >= dfn[u] && fa != -1) cut[u] = true;
            children++;
        } else {
            low[u] = min(low[u], dfn[v]);
        }
    }
    if (fa == -1 && children > 1) cut[u] = true;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            tarjan(i, -1);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (cut[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
