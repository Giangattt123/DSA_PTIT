//#include <bits/stdc++.h>
//using namespace std;
//int n , a[1000];
//void sinh(){
//	int i  = n - 1;
//	while(i >= 1 && a[i] > a[i + 1]){
//		--i;
//	}
//	if(i == 0){
//		for(int i = n ; i >= 1 ; i--) 
//			cout << a[i] << " ";
//	}
//	else{
//		int j = n;
//		while(a[i] > a[j]) --j;
//		swap(a[i] , a[j]);
//		reverse(a + i + 1 , a + n + 1);
//		for(int i = 1 ; i <= n ; i++)
//			cout << a[i] << " ";
//	}
//}
//int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n;
//	for(int i = 1 ; i <= n ; i++) cin >> a[i];
//	sinh();
//}
#include<bits/stdc++.h>
using ll = long long;

int a[1000] , n;
int main(){
	std::cin >> n;
	for(int i = 1 ; i <= n ; i++) std::cin >> a[i];
	int ok = 0;
	while(std::next_permutation(a + 1 , a + n + 1)){
		for(int i = 1 ; i <= n ; i++){
			std::cout << a[i] << " ";
		}
		ok = 1;
		break;
	}
	if(!ok) 
    {
        for(int i = 1 ; i <= n ; i++)
        {
            std::cout << i << " ";
        }
    }
}