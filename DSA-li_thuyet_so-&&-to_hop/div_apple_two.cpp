#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll C[1005][1005];
void init(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j == 0 || j == i) C[i][j] = 1;
            else C[i][j] = ( C[i-1][j-1] + C[i-1][j] ) % mod;
        }
    }
}
int main(){
    init();
    int n , m;
    cin >> n >> m;
    cout << C[m+n-1][n-1];
}
