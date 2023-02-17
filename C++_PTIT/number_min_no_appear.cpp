#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void in(){
	int n;
    cin >> n;
    vector<bool> v(n , 0);
    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        if (x >= 1 && x <= n)
            v[x] = 1;
    }
    for (int i = 1; i < n; ++i) {
        if (!v[i]) {
            cout << i << endl;
            return;
        }
    }
    cout << n + 1 << endl;
}

int main(){
	int t;
    cin >> t;
    while(t--)
        in();
    return 0;
}
