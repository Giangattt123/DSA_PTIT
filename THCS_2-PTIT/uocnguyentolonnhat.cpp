#include<stdio.h>
#include<math.h>
#define ll long long
ll prime_max(ll n){
	ll tmp;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				tmp = i;
				n/=i;
			}
		}
	}
	if(n!=1) tmp=n;
	return tmp;
}
int main(){
	int t;
	scanf("%d",&t); 
	while(t--){
		ll n;
		scanf("%lld",&n);
		printf("%lld\n",prime_max(n));
	}
}
