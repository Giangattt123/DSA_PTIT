#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct HocSinh{
	char ten[100];
	double diem;
};
typedef struct HocSinh HS;
	// Cach 1
HS nhap1(){
	HS x;
	gets(x.ten);
	scanf("%lf",&x.diem);
	return x;
}
	// Cach 2
HS nhap2(HS *a){
	getchar();
	gets(a->ten);
	scanf("%lf",&a->diem);
}
void in(HS a){
	printf("%s %.2lf\n",a.ten,a.diem);
}

main(){
	HS a[1000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) nhap2(&a[i]);
	for(int i=0;i<n;i++) in(a[i]);
		
}
