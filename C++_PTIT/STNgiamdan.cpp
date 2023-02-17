#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
bool check(string s) {
    int l = s.length();
    if (l == 1) return false;
    for (int i = 0; i <= l / 2; ++i) {
        if (s[i] != s[l - i - 1])
            return false;
    }
    return true;
}

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.length() > b.first.length()) return true;
    if (a.first.length() == b.first.length()) {
        if (a.first > b.first) return true;
    }
    return false;
}

int main()
{
    string s;
    map<string, int> m;
    while(cin >> s){
        if (check(s))
            m[s]++;
    }
    vector<pair<string, int>> v;
    for(auto x : m) {
        v.push_back(make_pair(x.fi, x.se));
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        cout << x.fi << " " << x.se << endl;
    }
}

