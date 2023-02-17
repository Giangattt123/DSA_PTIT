#include<bits/stdc++.h>
using ll = long long;
using namespace std;
void in(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<int> even, odd;
    while (ss >> tmp){
        int x = stoi(tmp);
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
	}
    if ((even.size() + odd.size()) % 2 == 0 && even.size() > odd.size()) cout << "YES\n";
    else if ((even.size() + odd.size()) % 2 == 1 && odd.size() > even.size()) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
        in();
    return 0;
}
