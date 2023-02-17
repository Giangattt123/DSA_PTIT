#include<stdio.h>
#include<math.h>
const int MOD = (int) 1e9 + 7;
// dem chu so 0 lien tiep tinh tu cuoi cua n! --> tralling_zero
// legenree : so luong so lan xuat kien k lan cua n! la n/k + n/k^2+...+ n/k^y vs k^y<=n
int main(){
	long long n;
	scanf("%lld",&n);
	long long sum = 0;
	for(long long k=5;k<=n;k*=5){
		sum += n/k;
		sum %= MOD;
	}
	printf("%lld",sum);
}

