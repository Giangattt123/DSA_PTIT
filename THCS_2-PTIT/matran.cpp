#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int b[100005]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			b[a[i][j]]++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[a[i][j]]==2) printf("%lld",a[i][j]);
		}
	}
}
