#include<bits/stdc++.h>
#include<algorithm>
#define endl "\n";
using namespace std;
using ll = long long;
typedef int songuyen;
int tong(int a , int b , int c){
	return a+b+c;
}
// pass reference : truyen tham chieu
// transmission of greed : truyen tham tri
int main(){
	int a=100,b=200,c=300;
	cout<<tong(a,b,c);
	tong(a,b,c);
}
