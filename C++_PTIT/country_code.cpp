#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class NhanVien{
	public:
		string maNV, tenNV, ns;
        int so_ngay_cong, luong_co_ban;
    public:
    	friend istream &operator >> (istream &in , NhanVien &a){
    		getline(cin , a.maNV);
    		getline(cin , a.tenNV);
    		getline(cin , a.ns);
    		cin >> a.so_ngay_cong;
    		cin >> a.luong_co_ban;
    		if(a.ns[1] == '/') a.ns = '0' + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3,"0");
    		return in;
    	}
    	string phu_cap(){
    		string tmp = this->maNV.substr(0 , 2);
    		if(tmp == "GD") return 2000000;
            if(tmp == "TP") return 500000;
            if(tmp == "NV") return 200000;
            return 1000000;
    	}
    	string chuc_vu(){
    		string tmp = this->maNV.substr(0 , 2);
    		if(tmp == "GD") return "Giam doc";
            if(tmp == "TP") return "Truong phong";
            if(tmp == "NV") return "Nhan vien";
            return "Pho giam doc";
    	}
    	int luong_cung(){
            return this->so_ngay_cong * this->luong_co_ban;
        }
        int thuong(){
            if(this->so_ngay_cong >= 27) return this->luong_cung() * 0.2;
            if(this->so_ngay_cong >= 25) return this->luong_cung() * 0.1;
            return 0;
        }
        int thu_nhap(){
            return this->luong_cung() + this->phu_cap() + this->thuong();
        }
    	friend ostream &operator << (ostream &out , NhanVien a){
    		 cout << a.maNV << " " << a.tenNV << " " << a.chuc_vu() << " " << a.ns << " ";
    		 cout << a.so_ngay_cong << " " << a.luong_co_ban << " " << a.thu_nhap();
    		return out;
    	}
};

bool cmp(NhanVien a , NhanVien b){
	if(a.thu_nhap() != b.thu_nhap())
		return a.thu_nhap() > b.thu_nhap();
	else 
		return a.maNV < b.maNV;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cin.ignore();
	NhanVien a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a + n , cmp);
	for(int i = 0 ; i < n ; i++)
		cout << a[i];
}