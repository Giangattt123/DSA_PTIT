#include<bits/stdc++.h>
#include<algorithm> 
using ll =long long;
using namespace std;
/*
In algorithm : sort(intro sort = quick + heap)
			stable(merge) --. stable: on dinh
*/
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n); // sap xep tang dan vs mang a co n phan tu
	sort(a,a+n,greater<int>()); // sap xep giam dan them ts greater<datatype>
	sort(a+x,a+y+1);// sort mang a tu chi so x den chi so y
	sort(a+x,a+y+1,greater<int>());
	for(int i=0;i<n;i++) cout << a[i] << " ";
	
}
