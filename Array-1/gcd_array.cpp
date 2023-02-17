#include<stdio.h>
#include<math.h>
int gcd(int a,int b){
	while(b){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	int x = 0;
	for(int i=0;i<n;i++){
		x = gcd(x,a[i]);
	}
	printf("%d",x);
}
