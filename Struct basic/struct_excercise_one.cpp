#include<stdio.h>
#include<math.h>
#include<string.h>
// struct --> tu 1 MSV --> info sinh vien do

struct SV {
	char ma[50];
	char ten[100];
	float gpa;
};

typedef struct SV SV;

void nhap(SV *a){
	scanf("%s",a->ma);
	getchar();
	gets(a->ten);
	scanf("%f",&a->gpa);
}

void in(SV a){
	printf("%s %s %.2f\n",a.ma,a.ten,a.gpa);
}
void TimKiem1(SV a[],int n, char m[1000]){
	for(int i=0;i<n;i++){
		if(strcmp(m,a[i].ma)==0){
			in(a[i]);
			return;
		}
	}
	printf("Khong tim thay sinh vien co ma can nhap!\n");
}

// tim kiem info sinh vien co gpa max
void TimKiem2(SV a[],int n){
	int res = 0, pos ;// pos: luu vi tri
	for(int i=0;i<n;i++){
		if(a[i].gpa>=res){
			res = a[i].gpa;
			pos = i;
		}
	}
	in(a[pos]);
}	

// sap xep sinh vien co gpa giam dan
void sx(SV a[], int n){
   	for(int i = 0; i<n ;i++){
      	int max_idx = i;
      	for(int j=i+1;j<n; j++){
         	if(a[j].gpa>a[max_idx].gpa){
            	max_idx=j;	
        	}
    	}
      	SV tmp=a[i];
      	a[i]=a[max_idx];
      	a[max_idx]=tmp;
	}
}

void Timkiem2(){
	
}
main(){
	int n;
	scanf("%d",&n);
	SV a[1000];
	for(int i=0;i<n;i++) nhap(&a[i]);
	for(int i=0;i<n;i++) in(a[i]);
	char s[100];
	printf("Nhap ma sinh vien can tim kiem :");
	scanf("%s",s);// in xau ki tu ko co khoang trang
	TimKiem1(a,n,s);
	TimKiem2(a,n);
	sx(a,n);
	for(int i=0;i<j+1;i++){
		if(a[i]++ == a[j].gpa){
			a[i]+=2;
			break;
		}
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

