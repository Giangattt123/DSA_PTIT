#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class DoanhNghiep{
    public:
        string madn , tendn;
        int sl;
        friend istream &operator >> (istream &is, DoanhNghiep &a){
            scanf("\n");
            getline(cin , a.madn);
            getline(cin , a.tendn);
            cin >> a.sl;
            return is;
        }
        friend ostream &operator << (ostream &os , DoanhNghiep a){
            cout << a.madn << " " << a.tendn << " " << a.sl << endl;
            return os;
        }
}

bool cmp(DoanhNghiep a , DoanhNghiep b){
    if(a.sl == b.sl) return a.madn < b.madn;
    return a.sl > b.sl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    DoanhNghiep a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a , a + n , cmp);
    for(int i = 0 ; i < n ; i++){
        cout << a[i];
    }
}