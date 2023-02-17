#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		double xa , ya, xb , yb;
		cin >> xa >> ya >> xb >> yb;
		double kc = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya-yb));
		cout << fixed << setprecision(4) << kc << endl;
	}
}

