#include<stdio.h>
#include<math.h>
// constraints : 0<=n<=10^7
int p[10000001];
void sang(){
	for(int i=0;i<=10000000;i++){
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for(int i=2;i<=sqrt(10000000);i++){
		if(p[i]==1){
			for(int j=i*i;j<=10000000;j+=i){
				p[j] = 0;
			}
		}
	}
}
long long digit_prime(long long n){
	while(n){
		int k = n % 10;
		if(k==0 || k==1 || k==4 || k==6 || k==8 || k==9) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	sang();
	int a,b;
	scanf("%d %d",&a,&b);
	int count = 0;
	for(int i=a;i<=b;i++){
		if(p[i] == 1 && digit_prime(i) == 1) count++;
	}
	printf("%d",count);
}

