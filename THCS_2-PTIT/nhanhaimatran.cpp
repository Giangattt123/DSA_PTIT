#include<math.h>
#include<stdio.h>
int main(){
	int m , n , p;
	scanf("%d %d %d",&m,&n,&p);
	int a[m][n],b[n][p],ab[m][p];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			scanf("%lld",&b[i][j]);
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			// tinh gia tri o phan tu ab[i][j];
			ab[i][j]=0;
			for(int k=0;k<n;k++){
				ab[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			printf("%d ",ab[i][j]);
		}
		printf("\n");
	}
}

