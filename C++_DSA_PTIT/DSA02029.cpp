#include <bits/stdc++.h>
using namespace std;
// thap ha noi
void thapHN(int n, char a, char b, char c) {
	if(n == 1) {
		cout << a << " -> " << c << endl;
		return;
	}
	thapHN(n - 1, a, c, b);
	thapHN(1, a, b, c);
	thapHN(n - 1, b, a, c);
}

void solve() {
	int n;
	cin >> n;
	thapHN(n, 'A', 'B', 'C');
}

int main() {

	solve();
	cout << endl;

}
