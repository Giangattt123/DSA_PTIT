#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	double sum = 0;
	for(ll i=1;i<=n;i++){
		sum+=1.0*1/(2*i);
	}
	cout<<fixed<<setprecision(5)<<sum;
}
