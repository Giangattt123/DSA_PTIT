#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Quay lui nhánh cận
/* Quay lui (Backtracking) X{1,2,3,...n} : liệt kê các cấu hình , mỗi cấu hình đc xây dựng bằng từng phần
tử , mỗi phần tử đc chọn bằng tất cả các khả năng của chúng
*/
// Mỗi x1 , x2 , x3 có 1 tập giá trị có thể gán cho nó
/* Mã giả của quay lui
void Try(i){
	for(int j = <kn 1> ; j <= <kn m> ; j++){
		< ghi nhận kết quả>
		x[i] = j;
		if(i == n) inkq();
		else Try(i + 1);
		<bỏ ghi nhận kết quả>
	}
}
*/

// Sinh xâu nhị phân có độ dài n
int X[100] , n;

void inkq(){
	for(int i = 1 ; i <= n ; i++) cout << X[i];
	cout << endl;
}
void Try(int i){
	// Xét các khả năng có thể gán cho X[i]
	for(int j = 0 ; j <= 1 ; j++){
		X[i]= j;
		if(i == n) inkq();
		else Try(i + 1);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Try(1);
}

