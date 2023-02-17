/*Cho m?ng s? nguyên A[] g?m N ph?n t?, hãy th?c hi?n các yêu c?u :

Li?t kê các giá tr? xu?t hi?n trong m?ng và t?n su?t tuong ?ng theo th? t? xu?t hi?n.
Li?t kê các giá tr? xu?t hi?n trong m?ng và t?n su?t tuong ?ng theo th? t? t? nh? t?i l?n.
Tìm s? có s? l?n xu?t hi?n nhi?u nh?t, n?u có nhi?u s? có cùng s? l?n xu?t hi?n thì ch?n s? l?n hon.
Tìm s? có s? l?n xu?t hi?n ít nh?t trong m?ng, n?u có nhi?u s? có cùng s? l?n xu?t hi?n thì ch?n s? nh? hon.
*/
#include<bits/stdc++.h>
using namespace std;
int cnt[10000] = {0};
int cnt2[10000] = {0};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	int max = -1e9;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
		cnt[a[i]]++;
		cnt2[a[i]]++;
		if(a[i] > max) max = a[i];
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]] != 0){
			cout << a[i] << " " << cnt[a[i]] << endl;
			cnt[a[i]] = 0;
		}
	}
	cout << endl;
	for(int i=0;i<=max;i++){
		if(cnt2[i] != 0){
			cout << i << " " << cnt2[i] << endl;
		}
	}
	cout << endl;
	int min2 = 1e9 , index_min , max2 = -1e9 , index_max;
	for(int i=0;i<=max;i++){
		if(cnt2[i] != 0){
			if(cnt2[i] >= max2){
				max2 = cnt2[i];
				index_max = i;
			}
			if(cnt2[i] < min2){
				min2 = cnt2[i];
				index_min = i;
			}
		}
	}
	cout << index_max << endl << index_min;

}
