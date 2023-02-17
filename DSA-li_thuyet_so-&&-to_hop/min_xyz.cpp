#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// so nho nhat co n cs chia het cho x y z

ll lcm(ll a , ll b){
	return a / __gcd(a,b) * b;
}
int main(){
	int x , y , z , n;
	cin >> x >> y >> z >> n;
	ll bc = lcm(x,lcm(y,z));
	ll nho = (ll)pow(10,n-1);
	ll lon = (ll)pow(10,n)-1;
	// tim so nho nhat chia het cho bc
	ll res = nho/bc * bc + bc;
	if(res <= lon) cout << res << endl;
	else cout << "-1";
}
