#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[1001];
	int b[1001] = {0};
	int max = -1e3 - 1;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i] > max) max = a[i];
		b[a[i]]++;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i=0;i<n;i++){  
		if(b[a[i]] != 0){
			printf("%d ",a[i]);
			b[a[i]] = 0;
		}
	}

}
