/*
Cho số nguyên n không âm. Viết hàm xử lý các yêu cầu sau 1. Kiểm tra n là số nguyên tố, nếu đúng in 1, sai in 0. 2. In tổng chữ số của n. 3. In tổng chữ số chẵn của n. 4. In tổng chữ số của n là số nguyên tố. 5. In số lật ngược của n. Ví dụ 123 in 321. 6. In số lượng ước của n là số nguyên tố (làm tương tự như phân tích thừa số ng tố). 7. In ước nguyên tố lớn nhất của n (làm tương tự như phân tích thừa số ng tố). 8. Kiểm tra nếu n tồn tại ít nhất 1 số 6, nếu đúng in 1, sai in 0. 9. Kiểm tra nếu tổng chữ số của n chia hết cho 8, nếu đúng in 1, sai in 0. 10. Tính tổng giai thừa các chữ số của n và in ra. Ví dụ n = 123, tổng = 1! + 2! +3! 11. Kiểm tra n có phải chỉ được tạo bởi 1 số hay không? Ví dụ 222, 333, 99999. Đúng in ra 1, sai in ra 0. 12. Kiểm tra n có phải có chữ số tận cùng là lớn nhất hay không, tức là không có chữ số nào của n lớn hơn chữ số hàng đơn vị của nó. nếu đúng in 1, sai in 0. 13. In tổng lũy thừa chữ số của n với cơ số là số chữ số. ví dụ 123 thì tính 1^3+2^3+3^3.

Input Format

Số duy nhất n

Constraints

2<=n<=1000;

Output Format

In ra 13 dòng tương ứng với các yêu cầu ở trên.

Sample Input 0

36
Sample Output 0

0
9
6
3
63
2
3
1
0
726
0
1
45
*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
using ll = long long;
bool check_snt(int n){ // 1 
	if(n < 2) return false;
	for(int i = 2;i <= sqrt(n) ; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int tong(int n){ // 2
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int tong_chan(int n){ // 3
	int sum_chan = 0;
	while(n){
		if(n % 10 % 2 == 0) sum_chan += n % 10;
		n /= 10;
	}
	return sum_chan;
}

int tong_snt(int n){ // 4
	int sum_snt = 0;
	while(n){
		int c =  n % 10;
		if(check_snt(c) == true) sum_snt += c;
		n /= 10;
	}
	return sum_snt;
}

int reverse(int n){ // 5
	int k = 0;
	while(n){
		k = k * 10 + n % 10;
		n /= 10;
	}
	return k;
}

int dem_uoc(int n){ // 6
	int cnt = 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
			}
			++cnt;
		}
	}
	if(n != 1) cnt++;
	return cnt;
}

int uoc_max(int n){ // 7
	int tmp;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i ==0){
			while(n % i ==0){
				tmp = i;
				n /= i;
			}
		}
	}
	if(n != 1) tmp = n;
	return tmp;
}

bool check_6(int n){ // 8
	while(n){
		if(n % 10 == 6) return true;
		n /= 10; 
	}
	return false;
}

bool check_sum_8(int n){ // 9
	if(tong(n) % 8 == 0) return true;
	else return false;
}

long long gt(int n){
	long long res = 1;
	for(int i = 1;i<=n;i++){
		res *= i;
	}
	return res;
}

long long tong_gt(int n){ // 10
	long long sum_gt = 0;
	while(n){
		int m = n % 10;
		sum_gt = sum_gt += gt(m);
		n /= 10;
	}
	return sum_gt;
}
bool check_11(int n){ // 11
	int sau = n % 10;
	n /= 10;
	while(n){
		int truoc = n % 10;
		if(sau != truoc) return false;
		sau = truoc;
		n /= 10;
	}
	return true;
}
bool check_12(int n){ // 12
	int cuoi = n % 10;
	n /= 10;
	while(n){
		if(n % 10 > cuoi) return false;
		n /= 10;
	}
	return true;
}

long long check_13(int n){ // 13
	int m = n , cnt = 0;
	while(m){
		cnt++;
		m /= 10;
	}
	long long tong = 0;
	while(n){
		tong += (int)pow(n % 10,cnt);
		n /= 10;
	}
	return tong;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	if(check_snt(n)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	cout<<tong(n)<<endl;
	cout<<tong_chan(n)<<endl;
	cout<<tong_snt(n)<<endl;
	cout<<reverse(n)<<endl;
	cout<<dem_uoc(n)<<endl;
	cout<<uoc_max(n)<<endl;
	if(check_6(n)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	if(check_sum_8(n)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	cout<<tong_gt(n)<<endl;
	if(check_11(n)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	if(check_12(n)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	cout<<check_13(n)<<endl;
}





