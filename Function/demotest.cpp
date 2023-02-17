#include<bits/stdc++.h>
using namespace std;
double sum(int n){
	double sum=0;
	for(int i=1;i<=n;i++){
		sum+=1.0*1/i;
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	cout<<fixed<<setprecision(2)<<sum(n);
}
