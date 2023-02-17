/**
Nh?p n là m?t s? nguyên không quá 100. In ra các hình tuong ?ng, m?i hình cách nhau m?t dòng tr?ng.

Input Format

S? nguyên duong N

Constraints

1=n=100

Output Format

In ra hình s? theo m?u

Sample Input 0

5
Sample Output 0

1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 

~~~~1
~~~22
~~333
~4444
55555

1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15 
**/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin>>n;
	int dem = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<dem<<" ";
			++dem;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		int cnt = i;
		for(int j=1;j<=n;j++){
			cout<<cnt<<" ";
			++cnt;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j<=n) cout<<"~";
			else cout<<i;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		int cnt = i,distance = n-1;
		for(int j=1;j<=i;j++){
			cout<<cnt<<" ";
			cnt+=distance;
			--distance;
		}
		cout<<endl;
	}
	
	
}
