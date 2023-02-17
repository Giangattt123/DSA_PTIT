#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int n;
	scanf("%d",&n);
	ll a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	int u , v;
	scanf("%d %d",&u,&v);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == u-1){
				ll tmp = a[i][j];
				a[i][j] = a[v-1][j];
				a[v-1][j] = tmp;
			}
			if(i == v-1){
				ll ans = a[i][j];
				a[i][j] = a[u-1][j];
				a[u-1][j] = ans;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
}
