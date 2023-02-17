#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j<=n) cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j>=i) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==1 || i==n || j==1 || j==i) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
