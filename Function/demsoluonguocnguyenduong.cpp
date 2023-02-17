#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int MOD = (int) 1e9 + 7;
int main(){
	int t;
	scanf("%d",&t);
	ll ans = 1;
	while(t--){
		int n , m;
		scanf("%d %d",&n,&m);
		ans*=(m+1);
		ans %= MOD;
	}
	printf("%lld",ans);
}

