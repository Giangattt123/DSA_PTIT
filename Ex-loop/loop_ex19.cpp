#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
typedef long long ll;
using ll = long long ;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	for(int i =0 ;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"*";
			else cout<<"#";
		}
		cout<<endl;
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0 || j==n-1) cout<<i+1<<" ";
			else cout<<"  ";
		}
		cout<<endl;
	}
	
	FOR(i,1,10){ // define 
		cout<<i;
	}
}

