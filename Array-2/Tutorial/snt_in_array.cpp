#include<stdio.h>
#include<math.h>
using ll = long long;
ll snt(ll n){
	if(n < 2) return 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int n , m;
	scanf("%d %d",&n,&m);
	ll a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(snt(a[i][j])) printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
}
