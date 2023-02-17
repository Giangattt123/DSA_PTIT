#include<bits/stdc++.h>
using ll = long long;
using namespace std;
struct goods{
	int stt;
	string name , type;
	float buy , sell , profit;
};

void nhap(goods &x){
	getline(cin , x.name);
	getline(cin , x.type);
	cin >> x.buy >> x.sell;
	x.profit = x.sell - x.buy;
}

void xuat(goods x){
	cout << x.stt << " " << x.name << " " << x.type << " ";
	cout << fixed << setprecision(2) << x.profit << endl;
}

bool cmp(goods a , goods b){
	return a.profit > b.profit;
}
int main(){
	int n;
	cin >> n;
	goods a[n];
	for(int i = 0 ; i < n ; i++){
		cin.ignore();
		a[i].stt = i + 1;
		nhap(a[i]);
	}
	sort(a , a + n , cmp);
	for(int i = 0 ; i < n ; i++){
		xuat(a[i]);
	}
}