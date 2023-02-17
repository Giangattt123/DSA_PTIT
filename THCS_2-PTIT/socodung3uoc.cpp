#include<stdio.h>
#include<math.h>
long long checkPrime(long long n)
{
    if (n < 2)
        return 0;
    for (long long i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main(){
	long long n;
	scanf("%lld",&n);
	long long cnt = 0;
	for(long long i=2;i<=sqrt(n);i++){
//		if(checkPrime(i)==1) printf("%lld ",i*i);
		if(checkPrime(i)==1) cnt++;
	}
	printf("%lld",cnt);
}
