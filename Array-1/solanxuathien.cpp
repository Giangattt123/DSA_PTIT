#include<stdio.h>
#include<math.h>
typedef long long ll;
/*Cho 1 mang A[] co N phan tu , dem so lan xuat hien 
cua cac phan tu trong mang va sap xep theo thu tu tu 
be den lon
Constraints 1<=N<=10^6 , 0<=A[i]<=10^6
Input 
6
1 1 4 3 2 1
Ouput 
1 3
2 1
3 1
4 1
*/
int cnt[1000001];
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int max_value = -1e9+1;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i] > max_value) max_value = a[i];
		cnt[a[i]]++;
	}
	
	// dem theo thu tu tu be den lon
	printf("Dem theo thu tu tu be den lon:\n");
	for(int i=0;i<=max_value;i++){
		if(cnt[i] != 0){
			printf("%d %d\n",i,cnt[i]);
		}
	}
	
	// dem theo thu tu xuat hien cac phan tu
	printf("Dem theo thu tu xuat hien:\n");  
	for(int i=0;i<n;i++){
		if(cnt[a[i]] != 0){
			printf("%d %d\n",a[i],cnt[a[i]]);
			cnt[a[i]] = 0;
		}
	}
}

