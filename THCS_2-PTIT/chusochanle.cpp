#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long a=0,b=0;
        long long n;
        scanf("%lld",&n);
        while(n!=0){
        	int m=n%10;
        	if(m%2==0){
            	a++;
        	}
			else b++;
        	n/=10;
		}
        printf("%lld %lld",b,a);
        printf("\n");
    }
}
