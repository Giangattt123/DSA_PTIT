#include<bits/stdc++.h>
using ll = long long;
using namespace std;

bool snt(int n){
	if(n < 2) return false;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
//	ofstream out;// file de ghi
//	out.open("0.txt");
//	for(int i = 0 ; i < 10 ; i++){
//		out << i << " ";
//	}
//	out.close();

//	ifstream in;
//	in.open("0.txt");// filse de doc
//	if(in.is_open()){
//		string s;
//		while(getline(in , s)) cout << s << endl;
//	}else cout << "Unable to open file !" << endl;
//	in.close();

	ifstream in;
	in.open("28tech_number.txt");
	if(in.is_open()){
		int n;
		in >> n;
		vector < int > v(n);
		for(int i = 0 ; i < n ; i++){
			in >> v[i];
		}
		for(int x : v) cout << x << " ";
	}else cout << "Unable to open file!" << endl;
}

