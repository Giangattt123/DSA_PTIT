/*Cho m?ng s? nguy�n A[] g?m N ph?n t?, h�y th?c hi?n c�c y�u c?u :

Li?t k� c�c gi� tr? xu?t hi?n trong m?ng v� t?n su?t tuong ?ng theo th? t? xu?t hi?n.
Li?t k� c�c gi� tr? xu?t hi?n trong m?ng v� t?n su?t tuong ?ng theo th? t? t? nh? t?i l?n.
T�m s? c� s? l?n xu?t hi?n nhi?u nh?t, n?u c� nhi?u s? c� c�ng s? l?n xu?t hi?n th� ch?n s? l?n hon.
T�m s? c� s? l?n xu?t hi?n �t nh?t trong m?ng, n?u c� nhi?u s? c� c�ng s? l?n xu?t hi?n th� ch?n s? nh? hon.
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
