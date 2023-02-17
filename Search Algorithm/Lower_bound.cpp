#include<bits/stdc++.h>
using ll = long long;
using namespace std;
/* Syntax lower_bound 
	lower_bound(first_iterator, last_iterator ,x)  >=
*/
int main(){
	int a[5] = {1,2,2,3,4};
	auto it = lower_bound(a,a+5,5);
//	cout << *it << endl; // toan tu giai tham chieu --> gia tri cua phan tu can tim
//	cout << it -  a << endl; // --> gia ve chi so cua phan tu can tim
	if(it == a+5){
		cout << "Khong tim thay tu nao loa hon hoac bang 5!\n";
	}
	else{
		cout << *it << endl;
		cout << it - a << endl;
	}
	vector<int> b = {1,2,2,3,4};
	auto it = lower_bound(b.begin(),b.end(),2);
	cout << *it << endl;
	cout << it -  b.begin() << endl;
}
