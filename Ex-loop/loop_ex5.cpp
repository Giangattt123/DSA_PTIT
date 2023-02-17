#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	ll a[100005];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll flag = 0;
	for(ll i=0;i<n;i++){
		if(a[i]==2022){
			flag = 1;
			break;
		}
	}
	if(flag==1) cout<<"YES\n";
	else cout<<"NO";
}
