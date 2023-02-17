#include<bits/stdc++.h>
using namespace std;
int nCk(int n,int k){
	if(k == 0 || n == k) return 1;
	else return nCk(n-1,k-1) + nCk(n-1,k);
}
int main(){
	int n , k;
	cin >> n >> k;
	cout << nCk(n,k);
}
