#include <bits/stdc++.h>
using namespace std;
void chuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < s.length() ; i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cin.ignore();
    	string str;
    	getline(cin , str);
    	string tmp;
    	stringstream ss(str);
    	vector<string> v;
    	while(ss >> tmp){
    		chuanHoa(tmp);
    		v.push_back(tmp);
		}
		if(n == 1){
			cout << v.back() << " ";
			for(int i = 0 ; i < v.size() - 1 ; i++)
				cout << v[i] << " ";
		}
		else if(n == 2){
			for(int i = 1 ; i < v.size() ; i++)
				cout << v[i] << " ";
			cout << v[0];
		}
		cout << endl;
	}
}
