#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a , ll b){
	int r;
	while(b){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	ll a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	ll cnt = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(gcd(a[i],a[j]) == 1) cnt++;
		}
	}
	printf("%lld",cnt);

	
}
