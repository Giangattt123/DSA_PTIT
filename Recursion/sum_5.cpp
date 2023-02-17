#include<bits/stdc++.h>
using namespace std;
double sum_5(int n){
	if(n == 1) return 1;
	else return (double)1/n + sum_5(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << fixed << setprecision(3) << sum_5(n);
}
