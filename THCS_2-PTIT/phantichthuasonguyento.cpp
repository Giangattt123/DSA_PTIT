#include<stdio.h>
#include<math.h>
void pt(long long n) {
	for(long long i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			int count = 0;
			while(n%i==0) {
				count++;
				n/=i;
			}
			printf("%lld^%lld",i,count);
			if(n!=1) printf(" * ");
		}
	}
	if(n!=1) printf("%lld^%lld",n,1);
}
int main() {
	long long n;
	scanf("%lld",&n);
	pt(n);
}

