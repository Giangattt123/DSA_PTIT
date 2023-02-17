#include<bits/stdc++.h>
using namespace std;
typedef long long ll; //-> xu li bang compiler
typedef int songuyen;
typedef string xau;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define ll long long
#define PI 3.14
#define MOD 1e9 + 7
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) begin(x), end(x)
#define duyet(a) for(auto it : a){cout << it << ' ';}
int main(){
	fastIO;
	FOR(i, 0, 5) cout << i << ' ';
	cout<<"\n";
	vector<int> a = {5, 1, 2, 3, 4};
	sort(all(a));
	duyet(a);
}

