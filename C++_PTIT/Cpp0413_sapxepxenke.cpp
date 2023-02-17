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
		int n;
		cin >> n;
		int a[n];
		for(auto &x : a) cin >> x;
		sort(a , a+n , greater<int>());
		int x = 0 , y = n - 1;
		while(x < y){
			cout << a[x++] << " ";
			if(x != y){
				cout << a[y--] << " ";
			}
		}
		if(x == y){
			cout << a[x];
		}
		cout << endl;
	}
}o

