#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&n);
	}
	int ans  = 1 , cnt = 1;
	long long sum = a[0];
	for(int i=1;i<n;i++){
		if(a[i] != a[i-1]) ++cnt;
		else{
			if(cnt > ans) 
		}
	}
}
