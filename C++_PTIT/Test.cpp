#include <bits/stdc++.h>

using namespace std;

long long m,n,i,dem;

int main()

{

	cin>>m>>n;
	
	dem=0;
	
	for (int i=m; i<=n; i++){
		if (i % 12 == 0) dem++;
		
	}
	
	
	cout<<dem;
	
	return 0;
	
}