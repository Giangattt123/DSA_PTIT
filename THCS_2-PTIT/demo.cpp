#include<stdio.h>
#include<math.h>
using ll = long long;
ll prime(ll n){
	if(n<2) return 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(prime(n)) printf("YES\n");
		else printf("NO\n");
	}

	
}
