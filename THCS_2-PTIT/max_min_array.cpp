#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int n , m;
	scanf("%d %d",&n,&m);
	ll a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	
	ll max = -1e9 - 1 , min = 1e9 + 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] < min){
				min = a[i][j];
			}
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	printf("%lld\n",min);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == min) printf("%d %d\n",i+1,j+1);
		}
	}
	printf("%lld\n",max);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == max) printf("%d %d\n",i+1,j+1);
		}
	}
	
}
