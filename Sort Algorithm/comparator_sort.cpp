#include<bits/stdc++.h>
using ll = long long;
using namespace std;
/* 	Comparator : minh tu build , ban chat greater<int>(): comparator --. tham so thu 3 trong ham sort
	return type : bool 
*/
bool comp(int a , int b){
	if(a < b) return true;
	else return false;
}
int sum(int n){
	int res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	return res;
}
// Sap xep theo tong chu so tang dan
bool comp1(int a,int b){
	if(sum(a) < sum(b)) return true;
	else return false;
}
// Sap xep theo tong chu so tang dan, neu tong bang nhau so nho hon se xep o dang truoc
bool comp2(int a , int b){
	if(sum(a) != sum(b)){
		return sum(a) < sum(b);
	}
	else return a < b;
}
// Ap dung sort cho pair
bool comp3(pair<int , int > a , pair<int , int > b){
	return a.second < b.second;
}
// Sap xep theo second tang dan , neu thang nao co first nho hon cho in ra truoc
bool comp4(pair<int , int > a , pair<int , int > b){
	if(a.second != b.second){
		return a.second < b.second;
	}
	else{
		return a.first < b.first;
	}
	
}
int main(){
	int n;
	cin >> n;
//	int a[n];
//	for(int i=0;i<n;i++) cin >> a[i];
//	// sap xep tang dan
//	sort(a,a+n,comp1);
//	for(int x:a){
//		cout << x << " ";
//	}
//	cout << endl;
//	int b[5] ={22 , 6 , 4 , 9 , 23};
//	sort(b , b+n , comp2);
//	for(int x:b){
//		cout << x << " ";
//	}
	pair<int , int> a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a,a+n,comp3);
	for(auto it : a){
		cout << it.first << " " << it.second << endl;
	}
}
