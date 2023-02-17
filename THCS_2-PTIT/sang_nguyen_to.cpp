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
int main(){
	sang();
	int a;
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		if(p[i] == 1) printf("%d ",i);
	}
}

