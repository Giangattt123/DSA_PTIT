#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    int n;
    scanf("%d",&n);
    ll a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                ll tmp = a[i][j];
                a[i][j] = a[i][n-1-j];
                a[i][n-1-j] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
}

