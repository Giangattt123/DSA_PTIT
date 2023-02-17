#include<stdio.h>
#include<math.h>
#define ll long long 
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min = a[0];
	int pos_min = 0;
	for(int i=0;i<n;i++){
		if(a[i] <= min) {
			min = a[i];
			pos_min = i;
		}
	}
	
	int max = a[0];
	int pos_max = 0;
	for(int i=n-1;i>=0;i--){
		if(a[i]>=max) {
			max = a[i];
			pos_max = i;
		}
	}
	printf("%d %d",pos_min,pos_max);
	
}
