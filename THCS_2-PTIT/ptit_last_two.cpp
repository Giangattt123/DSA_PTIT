#include<stdio.h>
#include<math.h>
#define ll long long
// tim bo so b sao cho 
// a + b <= N
// a + b chia het cho k
int main(){
	ll a , K , N;
	scanf("%lld %lld %lld",&a,&K,&N);
	if(a >= N) printf("-1");
	else{
		int check = 1;
		for(int i=a;i<=N;i++){
			if(i % K == 0){
				printf("%d ",i-a);
				check = 0;
			}
		}
		if(check == 1) printf("-1");
	}
}
