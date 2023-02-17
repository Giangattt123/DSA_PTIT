#include<stdio.h>
#include<math.h>
#define ll long long 
int nghich(int n){
    int m = n;
    int lat = 0;
    while(n != 0){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if(lat == m) return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(nghich(a[i][j])) ++cnt;
        }
    }
    printf("%d",cnt);
    
}
