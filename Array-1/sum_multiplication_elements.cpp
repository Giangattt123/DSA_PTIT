#include<stdio.h>
#include<math.h>
#define ll long long
const long long MOD = 1e9 + 7;
int main(){
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(ll i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	ll sum=0,res=1;
	for(ll i=0;i<n;i++){
		sum = sum + a[i] % (MOD);
		res = res * a[i] % (MOD);
	}
	printf("%lld\n%lld",sum % (MOD),res % (MOD));
}
