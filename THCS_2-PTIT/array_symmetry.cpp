#include<stdio.h>
#include<math.h>
int doixung(int a[],int n){
	int x = 0;
	int y = n - 1;
	while(x<=y){
		if(a[x] != a[y]) return 0;
		++x;
		--y;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(doixung(a,n)) printf("YES");
	else printf("NO");
}
