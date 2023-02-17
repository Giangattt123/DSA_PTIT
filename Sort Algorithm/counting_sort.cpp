#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Time complexity : O(N+K) K :phan tu lon nhat
int dem[1000001]; // 0 <= a[i] <= 10^6
void countingSort(int a[], int n){
	int K = INT_MIN;
	for(int i = 0; i < n; i++){
		dem[a[i]]++;
		K = max(K, a[i]);
	}
	for(int i = 0; i <= K; i++){ // tang dan
		// Giam dan i=K;i>=0;--i
		//i xuat hien dem[i] lan
		if(dem[i]){
			for(int j = 0; j < dem[i]; j++){
				cout << i << ' ';
			}
		}
	}
} 
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	countingSort(a,n);
}
