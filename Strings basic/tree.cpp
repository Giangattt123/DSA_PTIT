#include <iostream>
#include <vector>

using namespace std;

const int maxn = 1e5 + 5;
int n, m, cnt;
int a[maxn], cnta[maxn], big[maxn], sz[maxn], p[maxn];
bool res[maxn];
vector <int> e[maxn];

void input(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
}

void dfs1(int u){
    sz[u] = 1;
    for (int &v : e[u])
    if (v != p[u]){
        p[v] = u;
        dfs1(v);
        sz[u] += sz[v];
    }
}

void update(int val, int d){
    if (cnta[val] == 1 && d == -1) cnt--;
    if (cnta[val] == 0 && d == 1) cnt++;
    cnta[val] += d;
}

void add(int u, int p, int val){
    update(a[u], val);
    for (int v : e[u])
        if (v != p && v != big[u])
            add(v, u, val);
}

void dfs2(int u, int p, bool keep){
    big[u] = -1;
    for (int v : e[u])
        if ((v != p) && (big[u] == -1 || sz[v] > sz[big[u]]))
            big[u] = v;
    for (int v : e[u])
        if (v != p && v != big[u])
            dfs2(v, u, 0);
    if (big[u] != -1)
        dfs2(big[u], u, 1);
    add(u, p, 1);
    res[u] = (cnt == m);
    big[u] = 0;
    if (!keep)
        add(u, p, -1);
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    input();
    dfs1(1);
    dfs2(1, 0, 1);
    for (int i = 1; i <= n; i++)
        cout << (res[i] ? 1 : 0);
    return 0;
}
