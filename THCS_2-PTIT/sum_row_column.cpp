#include<stdio.h>
#include<math.h>
using ll = long long;
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
		ll sum = 0;
		for(int j=0;j<m;j++){
			sum+=a[i][j];
		}
		printf("%lld ",sum);
	}
	printf("\n");
	for(int i=0;i<m;i++){
		ll sum1 = 0;
		for(int j=0;j<n;j++){
			sum1+=a[j][i];
		}
		printf("%lld ",sum1);
	}

}

