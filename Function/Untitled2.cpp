#include<stdio.h>
#include<math.h>
/*
sqrt(n): tinh can bac 2 cua n --> double
cbrt(n): tinh can bac 3 cua n --> double
pow(a,b): a mu b
*/ 
// 12345 --> 3 2
// gap nhung bai ghi so luong --> vong lap dung bien dem
// gap nhung bai tinh tong thi dung bien sum --> cong don
int main(){
	int t; // <100
	scanf("%d",&t);
	while(t--){ // for(int i=1;i<=t;i++){body code}
		long long n;
		scanf("%lld",&n);
		int demle = 0, demchan = 0;
		while(n!=0){
			int k = n % 10;
			if(k % 2 != 0) ++demle;
			else ++demchan;
			n/=10;
		}
		printf("%d %d\n",demle,demchan);
	}
}
