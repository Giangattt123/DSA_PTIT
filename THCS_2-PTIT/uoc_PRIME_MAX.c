#include<stdio.h>
#include<math.h>
// in ra uoc nguyen to lon nhat cua 1 so nguyen duong
long phantich(long n){
	long tmp;
	int i;// 28 = 2 * 2 * 7
	for(i=2;i<=sqrt(n);i++){ // i <= 5
		while(n%i==0){ 
			tmp=i;
			n/=i;
		}
	}
	if(n!=1) tmp = n;
	return tmp;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n;
		scanf("%ld",&n);
		printf("%ld\n",phantich(n));
	}
}
