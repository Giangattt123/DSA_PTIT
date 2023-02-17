// C++ program to find the smallest
// window containing all characters
// of a pattern.
#include <bits/stdc++.h>
using namespace std;
string solve(string str)
{
    int l = str.length();
    int dist_cnt = 0;
    unordered_map<int, int> hash_map;
    for (int i = 0; i < l; i++) {
        hash_map[str[i]]++;
    }
    dist_cnt = hash_map.size();
    int size = INT_MAX;
    string ans;
    for (int i = 0; i < l; i++) {
        int count = 0;
        int visited[256] = {false};
        string sub_str = "";
        for (int j = i; j < l; j++) {
            if (visited[str[j]] == false) {
                count++;
                visited[str[j]] = true;
            }
            sub_str += str[j];
            if (count == dist_cnt)
                break;
        }
        if (sub_str.length() < size && count == dist_cnt)
        {
            ans = sub_str;
            size = ans.length();
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    	cin.ignore();
    	string s;
    	cin >> s;
    	cout << solve(s).length() << endl;
	}
}
