#include<stdio.h>
#include<math.h>
#include<string.h>
long long gcd(long long a,long long b){
	while(b){
		long long du = a%b;
		a = b;
		b = du;
	}
	return a;
}
void phantich_Prime(int n){
	for(int i =2 ;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				printf("%d ",i);
				n/=i;
			}
		}
	}
//	if(n>1) printf("%d",n);
}

int demuoc(int n){
	int ans = 0;
	for(int i =1  ;i<=sqrt(n);i++){
		if(n%i==0){
			++ans;
			if(i!=n/i) ++ans;
		}
	}
	return ans;
}
int main(){
	int n = 28;
	phantich_Prime(n);
	printf("\n");
	printf("%d",demuoc(16));
}
