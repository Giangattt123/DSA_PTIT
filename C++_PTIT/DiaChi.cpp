#include <bits/stdc++.h>
using namespace std;


void solve(vector<string> &ans) {
    vector<string> v;
    string s, str;
    
    getline(cin, str);
    stringstream ss(str);
    while (ss >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
    }

    string tmp = v.back();
    for (int i = 0; i < v.size() - 1; ++i) {
        tmp += v[i][0];
    }
    ans.push_back(tmp);
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    vector<string> res;
    while (T--) {
        solve(res);
    }

    for (int i = 0; i < res.size(); ++i) {
        int d = 0;
        for (int j = 0; j < i; ++j) {
            if (res[i] == res[j])
                d++;
        }
        cout << res[i];
        if (d > 0)
            cout << d + 1;
        cout << "@ptit.edu.vn\n";
    }
    return 0;
}
