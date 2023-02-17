// kiem tra 1 so co bieu dien dc duoi dang 11 ,111,1111,11111,...
// neu dc in ra YES ko in ra NO
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ll n;
	cin >> n;
	for(int i = 0 ; i <= n / 111  ; i++){
		ll res = n  - i * 111;
		if(res % 11 == 0){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO";
}
