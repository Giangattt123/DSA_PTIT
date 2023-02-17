#include<bits/stdc++.h>
using ll = long long;
using namespace std;
struct SinhVien{
	string ten;
	string ngaysinh;
	string diachi;
	int toan,li,hoa;
	void nhap(){
		getline(cin , ten);
		getline(cin , ngaysinh);
		getline(cin, diachi);
		cin >> toan >> li >> hoa;
	}
	void in(){
		cout << ten << " " << ngaysinh << " " << diachi << " " << toan + li + hoa << " ";
		if(toan + li + hoa >=24) cout << "DO" << endl;
		else cout << "TRUOT" << endl;
	}
	int sum_score(){
		return toan + li + hoa;
	}
};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	SinhVien a[n];
	int max_score = 0;
	for(int i=0;i<n;i++){
		cin.ignore();
		a[i].nhap();
		max_score = max(max_score,a[i].sum_score());
	}
	cout << "DANH SACH THU KHOA :" << endl;
	for(int i=0;i<n;i++){ 
		if(a[i].sum_score() == max_score){
			cout << a[i].ten << " " << a[i].ngaysinh << " " << a[i].diachi << " " << max_score << endl;
		}
	}
	cout << "KET QUA XET TUYEN:" << endl;
	for(int i=0;i<n;i++){
		a[i].in();
	}
}