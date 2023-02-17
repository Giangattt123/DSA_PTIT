#include<stdio.h>
#include<math.h>
#include<string.h>
// kiem tra so nguyen to
long long check (long long n){
	if(n<2) return 0;
	for(long long i =2 ;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	long long n , t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		long long max = 0;
		for(long long i = 1 ; i <= n ; i++){
			if(check(i)){
				if(n%i==0 && i>max){
					max = i;
				}
			}
		}
		printf("%lld\n",max);
	}
}
