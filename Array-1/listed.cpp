#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n < 2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int reversible_number(int n){
	int m = n;
	int lat = 0;
	while(n){
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	if(lat == m) return 1;
	else return 0;
}

int sum_prime(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(prime(sum)) return 1;
	else return 0;
}

int perfect_square(int n){ // so chinh phuong
	int sq = sqrt(n);
	if(sq * sq == n) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
	for(int i=0;i<n;i++){
		if(prime(a[i])) cnt1++;
		if(reversible_number(a[i])) cnt2++;
		if(perfect_square(a[i])) cnt3++;
		if(sum_prime(a[i])) cnt4++;
	}
	printf("%d\n%d\n%d\n%d",cnt1,cnt2,cnt3,cnt4);
	

}
