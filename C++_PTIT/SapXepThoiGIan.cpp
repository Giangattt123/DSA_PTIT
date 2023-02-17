#include <bits/stdc++.h>
using namespace std;

struct Time{
    int h, m, s;
    void input() {
        cin >> h >> m >> s;
    } 
    void output() {
        cout << h << " " << m << " " << s << endl;
    }
};

bool cmp(Time a, Time b) 
{
    if (a.h < b.h) return true;
    if (a.h == b.h) {
        if (a.m < b.m) return true;
        if (a.m == b.m) {
            if (a.s < b.s) return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        a[i].output();
    }
}

