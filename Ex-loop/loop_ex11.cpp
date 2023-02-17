#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	ll sum1 = 0;
	ll sum2 = 0;
	for(ll i=1;i<=n;i++){
		if(i%2==1) sum1+=i;
		else sum2+=i;
	}
	cout<<-sum1+sum2;
}
