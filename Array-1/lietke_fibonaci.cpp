#include<stdio.h>
#include<math.h>
#define ll long long
ll fibo[100];
void check_fibo(){
	fibo[0] = 0; 
	fibo[1] = 1;
	for(ll i=2;i<=92;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

ll check(ll n){
	for(ll i=0;i<=92;i++){
		if(n == fibo[i]) return 1;
	}
	return 0;
}
int main(){
	check_fibo();
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(ll i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	int count = 0;
	for(ll i=0;i<n;i++){
		if(check(a[i])) {
			printf("%lld ",a[i]);
			++count;
		}
	}
	if(count == 0) printf("NONE");
}
