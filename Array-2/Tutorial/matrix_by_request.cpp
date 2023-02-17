/*
Sample input 0:
5
510 745 649 186 313 
474 22 168 18 787 
905 958 391 202 625 
477 414 314 824 334 
874 372 159 833 70 

Sample output 0:
Pattern 1:
510 474 905 477 874 
745 22 958 414 372 
649 168 391 314 159   ---> ma trn chuyen vi( transpose )
186 18 202 824 833 
313 787 625 334 70 
Pattern 2:
70 833 159 372 874 
334 824 314 414 477 
625 202 391 958 905 
787 18 168 22 474 
313 186 649 745 510 
Pattern 3:
313 787 625 334 70 
186 18 202 824 833 
649 168 391 314 159 
745 22 958 414 372 
510 474 905 477 874 
Pattern 4:
313 186 649 745 510 
787 18 168 22 474 
625 202 391 958 905 
334 824 314 414 477 
70 833 159 372 874 
*/
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
	printf("Pattern 1:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%lld ",a[j][i]);
		}
		printf("\n");
	}
	printf("Pattern 2:\n");
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	printf("Pattern 3:\n");
	for(int j=n-1;j>=0;j--){
		for(int i=0;i<n;i++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	printf("Pattern 4:\n");
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	
}
